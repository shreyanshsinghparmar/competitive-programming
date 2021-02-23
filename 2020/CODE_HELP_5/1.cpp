#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int n, r;
vector<int> a;

int cost(int x) {
	priority_queue<int, vector<int>, greater<int>> costs;
	for(int i = 0; i < n; ++i)
		costs.push(a[i] + (i + 1) * x);
	int ans = 0;
	while(x--) {
		ans += costs.top();
		costs.pop();
	}
	return ans;
}

int32_t main() {
	fastio;

	cin >> n >> r;
	a.resize(n);
	for(int i = 0; i < n; ++i) cin >> a[i];
	int lo = 0, hi = n, ans = 0;
	while(lo <= hi) {
		int mid = (lo + hi) / 2;
		if(cost(mid) <= r) {
			lo = mid + 1;
			ans = mid;
		} else {
			hi = mid - 1;
		}
	}
	cout << ans << ' ' << cost(ans);

	return 0;
}

/*
If Yashpreet can buy k courses, then he can also buy less than k courses because they will be within his budget. If he can’t buy k courses, then can’t also buy more than k courses because they will exceed his budget. So, we can apply binary search to find the best value for k. For each value , we will compute the new prices, push them in a min heap and pick the minimum k prices to find the best minimum cost for k courses.
*/

/*
Due to lockdown being imposed on whole country and college too being shut, all students are at their homes. Yashpreet thought of utilising this time in learning new technologies/skills via MOOCs on Coursemy.

There are  courses available on Coursemy numbered from  to . The th course costs  Rupees. But there's a catch while purchasing these courses. If Yashpreet purchases  courses with indices , then the cost of each course  will become  for , i.e., the cost of each course will become its base cost added to its index multiplied by .

Yashpreet wants to purchase as many courses as possible so that he can learn many new skills/technologies. He has a budget of  Rupees. Note that he cannot buy a course more than once (and why should he). If there are many ways to maximize the number of courses purchased, he will choose the way so that the amount which is left after purchasing the courses will be maximum. Help Yashpreet find the maximum number of courses he can purchase and minimum cost to purchase these courses.

Input Format

First line contains two integers  and  - the number of courses available at Coursemy and Yashpreet's budget.
Second line contains  space separated integers  - the base costs of the courses.
Constraints

Output Format

On a single line, print two integers separated by a space:  - the maximum number of courses that can be purchased and the minimum total cost to purchase them.

Sample Input 0

3 11
2 3 5
Sample Output 0

2 11
Explanation 0

He cannot take the three courses because they will cost him  with total cost . If he decides to purchase only two courses, then the costs will be . So he can afford the first and second courses.

Sample Input 1

4 100
1 2 5 6
Sample Output 1

4 54
Explanation 1

He can purchase all courses as they will cost him .

Sample Input 2

1 7
7
Sample Output 2

0 0
Explanation 2

There is only one course available which will cost him  Rupees, so he cannot buy it.
*/

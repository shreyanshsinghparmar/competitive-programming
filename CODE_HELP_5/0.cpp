#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

bool comparator(pair<int, int> &a, pair<int, int> &b) {
	return (a.second > b.second);
}

int32_t main() {
	fastio;

	int n, debug = 0;
	cin >> n;
	map<int, int, greater<int>> freq;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++freq[x];
	}

	vector<pair<int, int>> v(n);
	for(pair<int, int> i : freq) v.push_back(i);
	sort(v.begin(), v.end(), comparator);

	int size = n, ans = 0;
	for(pair<int, int> i : v) {
		if(debug) cout << i.first << ':' << i.second << '\n';
		size -= i.second;
		++ans;
		if(size <= n / 2) break;
		}
	cout << ans;

	return 0;
}

/*
Karsha has a problem
A Coding competition was organized in a University. Ms. Karsha Chaudhari, the computer teacher, was given the responsibility to prepare some good questions. After framing some good ones, she was stuck in a problem and was not able to solve it. She asked his friend Ayush for a solution.

You are provided with an array . You are asked to choose a set of integers and eliminate all the presence of these integers in the array. Return the minimum size of the set so that at least half of the integers of the array are eliminated.

Input Format

The first line contains an integer , denoting number of elements in .
Second line contains  space separated integers .
Constraints

 is even
Output Format

Print the minimum size of the set.

Sample Input 0

10
3 3 3 3 5 5 5 2 2 7
Sample Output 0

2
Explanation 0

If we choose [3, 5] as our set, we can see that after removing all instances of them, the new array will become [2, 2, 7] which is of size , hence lesser than half of the original array size.

Sample Input 1

6
7 7 7 7 7 7        
Sample Output 1

1
Explanation 1

We will choose 7 in our set.
*/

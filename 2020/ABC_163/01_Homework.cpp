#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	int tot = 0;
	while(m--) {
		int x;
		cin >> x;
		tot += x;
	}
	if(tot <= n)
		cout << n - tot;
	else
		cout << -1;

	return 0;
}

/*
B - Homework / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
200
 points

Problem Statement
Takahashi has 
N
 days of summer vacation.

His teacher gave him 
M
 summer assignments. It will take 
A
i
 days for him to do the 
i
-th assignment.

He cannot do multiple assignments on the same day, or hang out on a day he does an assignment.

What is the maximum number of days Takahashi can hang out during the vacation if he finishes all the assignments during this vacation?

If Takahashi cannot finish all the assignments during the vacation, print -1 instead.

Constraints
1
≤
N
≤
10
6
1
≤
M
≤
10
4
1
≤
A
i
≤
10
4
Input
Input is given from Standard Input in the following format:

N
 
M

A
1
 
.
.
.
 
A
M

Output
Print the maximum number of days Takahashi can hang out during the vacation, or -1.

Sample Input 1 
Copy
41 2
5 6
Sample Output 1 
Copy
30
For example, he can do the first assignment on the first 
5
 days, hang out on the next 
30
 days, and do the second assignment on the last 
6
 days of the vacation. In this way, he can safely spend 
30
 days hanging out.

Sample Input 2 
Copy
10 2
5 6
Sample Output 2 
Copy
-1
He cannot finish his assignments.

Sample Input 3 
Copy
11 2
5 6
Sample Output 3 
Copy
0
He can finish his assignments, but he will have no time to hang out.

Sample Input 4 
Copy
314 15
9 26 5 35 8 9 79 3 23 8 46 2 6 43 3
Sample Output 4 
Copy
9
*/

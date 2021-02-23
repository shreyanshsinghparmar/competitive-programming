#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	vector<int> a(n);
	int mn = INT_MAX, mx = INT_MIN;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		mn = min(mn, a[i]);
		mx = max(mx, a[i]);
	}
	int ans = INT_MAX;
	for(int i = mn; i <= mx; ++i) {
		int curr = 0;
		for(int j = 0; j < n; ++j) curr += (a[j] - i) * (a[j] - i);
		ans = min(ans, curr);
	}
	cout << ans;

	return 0;
}

/*
The point of meeting can only lie somewhere in between the houses of the attendees.
* So, we calculate the stamina spent for every point in the range and report the minimum stamina spent.
*/

/*
C - Rally / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
300
 points

Problem Statement
There are 
N
 people living on a number line.

The 
i
-th person lives at coordinate 
X
i
.

You are going to hold a meeting that all 
N
 people have to attend.

The meeting can be held at any integer coordinate. If you choose to hold the meeting at coordinate 
P
, the 
i
-th person will spend 
(
X
i
−
P
)
2
 points of stamina to attend the meeting.

Find the minimum total points of stamina the 
N
 people have to spend.

Constraints
All values in input are integers.
1
≤
N
≤
100
1
≤
X
i
≤
100
Input
Input is given from Standard Input in the following format:

N

X
1
 
X
2
 
.
.
.
 
X
N

Output
Print the minimum total stamina the 
N
 people have to spend.

Sample Input 1 
Copy
2
1 4
Sample Output 1 
Copy
5
Assume the meeting is held at coordinate 
2
. In this case, the first person will spend 
(
1
−
2
)
2
 points of stamina, and the second person will spend 
(
4
−
2
)
2
=
4
 points of stamina, for a total of 
5
 points of stamina. This is the minimum total stamina that the 
2
 people have to spend.

Note that you can hold the meeting only at an integer coordinate.

Sample Input 2 
Copy
7
14 14 2 13 56 2 37
Sample Output 2 
Copy
2354
*/

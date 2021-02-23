#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n + 1], freq[n + 1];
	memset(freq, 0, sizeof(freq));
	for(int i = 2; i <= n; ++i) cin >> a[i];
	for(int i = 2; i <= n; ++i) ++freq[a[i]];
	for(int i = 1; i <= n; ++i) cout << freq[i] << '\n';

	return 0;
}

/*
C - management / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
300
 points

Problem Statement
A company has 
N
 members, who are assigned ID numbers 
1
,
.
.
.
,
N
.

Every member, except the member numbered 
1
, has exactly one immediate boss with a smaller ID number.

When a person 
X
 is the immediate boss of a person 
Y
, the person 
Y
 is said to be an immediate subordinate of the person 
X
.

You are given the information that the immediate boss of the member numbered 
i
 is the member numbered 
A
i
. For each member, find how many immediate subordinates it has.

Constraints
2
≤
N
≤
2
×
10
5
1
≤
A
i
<
i
Input
Input is given from Standard Input in the following format:

N

A
2
 
.
.
.
 
A
N

Output
For each of the members numbered 
1
,
2
,
.
.
.
,
N
, print the number of immediate subordinates it has, in its own line.

Sample Input 1 
Copy
5
1 1 2 2
Sample Output 1 
Copy
2
2
0
0
0
The member numbered 
1
 has two immediate subordinates: the members numbered 
2
 and 
3
.

The member numbered 
2
 has two immediate subordinates: the members numbered 
4
 and 
5
.

The members numbered 
3
, 
4
, and 
5
 do not have immediate subordinates.

Sample Input 2 
Copy
10
1 1 1 1 1 1 1 1 1
Sample Output 2 
Copy
9
0
0
0
0
0
0
0
0
0
Sample Input 3 
Copy
7
1 2 3 4 5 6
Sample Output 3 
Copy
1
1
1
1
1
1
0
*/

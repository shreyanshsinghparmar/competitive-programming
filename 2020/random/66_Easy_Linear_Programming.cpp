#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int a, b, c, k;
	cin >> a >> b >> c >> k;

	int ans = min(a, k);
	k -= min(a, k);
	k -= min(b, k);
	ans -= min(c, k);

	cout << ans;

	return 0;
}

/*
B - Easy Linear Programming / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
200
 points

Problem Statement
We have 
A
 cards, each of which has an integer 
1
 written on it. Similarly, we also have 
B
 cards with 
0
s and 
C
 cards with 
−
1
s.

We will pick up 
K
 among these cards. What is the maximum possible sum of the numbers written on the cards chosen?

Constraints
All values in input are integers.
0
≤
A
,
B
,
C
1
≤
K
≤
A
+
B
+
C
≤
2
×
10
9
Input
Input is given from Standard Input in the following format:

A
 
B
 
C
 
K

Output
Print the maximum possible sum of the numbers written on the cards chosen.

Sample Input 1 
Copy
2 1 1 3
Sample Output 1 
Copy
2
Consider picking up two cards with 
1
s and one card with a 
0
. In this case, the sum of the numbers written on the cards is 
2
, which is the maximum possible value.

Sample Input 2 
Copy
1 2 3 4
Sample Output 2 
Copy
0
Sample Input 3 
Copy
2000000000 0 0 2000000000
Sample Output 3 
Copy
2000000000
*/

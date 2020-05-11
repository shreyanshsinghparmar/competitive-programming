#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int a, b;
	cin >> a >> b;
	int curr = 1, ans = 0;
	while(curr < b) {
		curr += a;
		--curr;
		++ans;
	}
	cout << ans;

	return 0;
}

/*
With each power strip we get a new sockets. If it satisfies the requirements, we stop there.
* Otherwise, we use one of those a sockets to get a power strip with a new sockets.
*/

/*
B - Power Socket / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
200
 points

Problem Statement
Takahashi's house has only one socket.

Takahashi wants to extend it with some number of power strips, each with 
A
 sockets, into 
B
 or more empty sockets.

One power strip with 
A
 sockets can extend one empty socket into 
A
 empty sockets.

Find the minimum number of power strips required.

Constraints
All values in input are integers.
2
≤
A
≤
20
1
≤
B
≤
20
Input
Input is given from Standard Input in the following format:

A
 
B

Output
Print the minimum number of power strips required.

Sample Input 1 
Copy
4 10
Sample Output 1 
Copy
3
3
 power strips, each with 
4
 sockets, extend the socket into 
10
 empty sockets.

Sample Input 2 
Copy
8 9
Sample Output 2 
Copy
2
2
 power strips, each with 
8
 sockets, extend the socket into 
15
 empty sockets.

Sample Input 3 
Copy
8 8
Sample Output 3 
Copy
1
*/

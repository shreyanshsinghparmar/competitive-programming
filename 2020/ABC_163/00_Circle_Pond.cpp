#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int r;
	cin >> r;
	cout << 2.0 * 3.14 * r;

	return 0;
}

/*
A - Circle Pond / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
100
 points

Problem Statement
Print the circumference of a circle of radius 
R
.

Constraints
1
≤
R
≤
100
All values in input are integers.
Input
Input is given from Standard Input in the following format:

R

Output
Print the circumference of the circle. Your output is considered correct if and only if its absolute or relative error from our answer is at most 
10
−
2
.

Sample Input 1 
Copy
1
Sample Output 1 
Copy
6.28318530717958623200
Since we accept an absolute or relative error of at most 
10
−
2
, 
6.28
 is also an acceptable output, but 
6
 is not.

Sample Input 2 
Copy
73
Sample Output 2 
Copy
458.67252742410977361942
*/

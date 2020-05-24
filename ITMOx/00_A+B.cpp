#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a, b;
	cin >> a >> b;
	cout << a + b;

	return 0;
}

/*
A + B
0 points possible (ungraded)
Input file:	input.txt
Output file:	output.txt
Time limit:	2 seconds
Memory limit:	256 megabytes
Given two integer numbers, A and B, output A+B.

Input
The input file contains one line with two integer numbers, A and B (−109≤A,B≤109), separated by one whitespace.

Output
Output A+B in the first and only line of the output file.

Example
input.txt
output.txt
23 11	34
Note
This is an ungraded problem, which is designed for you to try your hands at the submission system. There exists a video for how to solve this problem in various languages.
*/

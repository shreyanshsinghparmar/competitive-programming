/*
ID: shreyan13
TASK: test
LANG: C++
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	cout << a + b << '\n';

	return 0;
}

/*
Sum the Numbers
The simplest program on the training pages: read in two integers from a single line and print their sum.

PROGRAM NAME: test
INPUT FORMAT
Line 1: Two small space-separated integers
SAMPLE INPUT (file test.in)
1 3
OUTPUT FORMAT
Line 1: A single integer that is the sum of the two input integers.
SAMPLE OUTPUT (file test.out)
4
*/

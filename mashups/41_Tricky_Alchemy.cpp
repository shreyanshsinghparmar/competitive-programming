#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int a, b, x, y, z;
	cin >> a >> b >> x >> y >> z;
	int ans = 0;
	ans = (a >= (2 * x + y)) ? 0 : (2 * x + y) - a;
	ans += (b >= (z * 3 + y)) ? 0 : (z * 3 + y) - b;
	cout << ans;

	return 0;
}

/*
 * Yellow ball = 2 yellow crystals
 * Green ball = 1 yellow + 1 blue
 * Blue ball = 3 blue
So, the total number of yellow crystals required is (2 * x + y)
* 2 * x for the yellow balls and y for the green balls
And total number of blue balls required is (3 * z + y)
* 3 * z for the blue balls and y for the green balls
Hence, if the number of crystals already present at at least this much, nothing else is required
Otherwise, the number of crystals missing is the number of crystals short of these quantites
*/

/*
A. Tricky Alchemy
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
During the winter holidays, the demand for Christmas balls is exceptionally high. Since it's already 2018, the advances in alchemy allow easy and efficient ball creation by utilizing magic crystals.

Grisha needs to obtain some yellow, green and blue balls. It's known that to produce a yellow ball one needs two yellow crystals, green — one yellow and one blue, and for a blue ball, three blue crystals are enough.

Right now there are A yellow and B blue crystals in Grisha's disposal. Find out how many additional crystals he should acquire in order to produce the required number of balls.

Input
The first line features two integers A and B (0 ≤ A, B ≤ 109), denoting the number of yellow and blue crystals respectively at Grisha's disposal.

The next line contains three integers x, y and z (0 ≤ x, y, z ≤ 109) — the respective amounts of yellow, green and blue balls to be obtained.

Output
Print a single integer — the minimum number of crystals that Grisha should acquire in addition.

Examples
inputCopy
4 3
2 1 1
outputCopy
2
inputCopy
3 9
1 1 3
outputCopy
1
inputCopy
12345678 87654321
43043751 1000000000 53798715
outputCopy
2147483648
Note
In the first sample case, Grisha needs five yellow and four blue crystals to create two yellow balls, one green ball, and one blue ball. To do that, Grisha needs to obtain two additional crystals: one yellow and one blue.
*/

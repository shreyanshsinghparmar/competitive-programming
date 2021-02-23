#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)) {
		cout << -1;
	} else if(x1 == x2) {
		int a = abs(y1 - y2);
		cout << x1 + a << ' ' << y1 << ' ' << x2 + a << ' ' << y2;
	} else if(y1 == y2) {
		int a = abs(x1 - x2);
		cout << x1 << ' ' << y1 + a << ' ' << x2<< ' ' << y2 + a;
	} else {
		cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
	}

	return 0;
}

/*
Four vertices of a square with side length a (and sides parallel to coordinate axis) are in this form: (x 0, y 0), (x 0 + a, y 0), (x 0, y 0 + a), (x 0 + a, y 0 + a).

Two vertices are given, calculate the two others (and check the ranges).
*/

/*
A. Pashmak and Garden
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Pashmak has fallen in love with an attractive girl called Parmida since one year ago...

Today, Pashmak set up a meeting with his partner in a romantic garden. Unfortunately, Pashmak has forgotten where the garden is. But he remembers that the garden looks like a square with sides parallel to the coordinate axes. He also remembers that there is exactly one tree on each vertex of the square. Now, Pashmak knows the position of only two of the trees. Help him to find the position of two remaining ones.

Input
The first line contains four space-separated x 1, y 1, x 2, y 2 ( - 100 ≤ x 1, y 1, x 2, y 2 ≤ 100) integers, where x 1 and y 1 are coordinates of the first tree and x 2 and y 2 are coordinates of the second tree. It's guaranteed that the given points are distinct.

Output
If there is no solution to the problem, print -1. Otherwise print four space-separated integers x 3, y 3, x 4, y 4 that correspond to the coordinates of the two other trees. If there are several solutions you can output any of them.

Note that x 3, y 3, x 4, y 4 must be in the range ( - 1000 ≤ x 3, y 3, x 4, y 4 ≤ 1000).

Examples
inputCopy
0 0 0 1
outputCopy
1 0 1 1
inputCopy
0 0 1 1
outputCopy
0 1 1 0
inputCopy
0 0 1 2
outputCopy
-1
*/

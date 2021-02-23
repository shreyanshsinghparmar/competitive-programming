#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int a1, b1, a2, b2;
		cin >> a1 >> b1 >> a2 >> b2;
		if(a1 > b1) swap(a1, b1);
		if(a2 > b2) swap(a2, b2);
		cout << (a1 + a2 == b1 && b1 == b2 ? "YES" : "NO") << '\n';
	}

	return 0;
}

/*
If a square is cut into 2 rectangles, one of the sides of the rectangles will be equal
and the sum of the unequal sides will result in the equal sides length,
* because otherwise the shape formed will not have equal sides and hence won't be a square
So, we determine the smaller and greater numbers, because the sum of the smaller numbers will always be the greater number
* the smaller numbers are the constituents of the portion that has been cut, and combining them will give the length of the uncut side, if the shape was originally a square
*/

/*
B. Square?
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya claims that he had a paper square. He cut it into two rectangular parts using one vertical or horizontal cut. Then Vasya informed you the dimensions of these two rectangular parts. You need to check whether Vasya originally had a square. In other words, check if it is possible to make a square using two given rectangles.

Input
The first line contains an integer t (1≤t≤104) — the number of test cases in the input. Then t test cases follow.

Each test case is given in two lines.

The first line contains two integers a1 and b1 (1≤a1,b1≤100) — the dimensions of the first one obtained after cutting rectangle. The sizes are given in random order (that is, it is not known which of the numbers is the width, and which of the numbers is the length).

The second line contains two integers a2 and b2 (1≤a2,b2≤100) — the dimensions of the second obtained after cutting rectangle. The sizes are given in random order (that is, it is not known which of the numbers is the width, and which of the numbers is the length).

Output
Print t answers, each of which is a string "YES" (in the case of a positive answer) or "NO" (in the case of a negative answer). The letters in words can be printed in any case (upper or lower).

Example
inputCopy
3
2 3
3 1
3 2
1 3
3 3
1 3
outputCopy
Yes
Yes
No
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int a[5];
	for(int i = 1; i <= 4; ++i) cin >> a[i];
	string s;
	cin >> s;
	int ans = 0;
	for(char c : s) ans += a[c - '0'];
	cout << ans;

	return 0;
}

/*
A. Black Square
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "Black Square" on his super cool touchscreen phone.

In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly a i calories on touching the i-th strip.

You've got a string s, describing the process of the game and numbers a 1, a 2, a 3, a 4. Calculate how many calories Jury needs to destroy all the squares?

Input
The first line contains four space-separated integers a 1, a 2, a 3, a 4 (0 ≤ a 1, a 2, a 3, a 4 ≤ 104).

The second line contains string s (1 ≤ |s| ≤ 105), where the і-th character of the string equals "1", if on the i-th second of the game the square appears on the first strip, "2", if it appears on the second strip, "3", if it appears on the third strip, "4", if it appears on the fourth strip.

Output
Print a single integer — the total number of calories that Jury wastes.

Examples
inputCopy
1 2 3 4
123214
outputCopy
13
inputCopy
1 5 3 2
11221
outputCopy
13
*/

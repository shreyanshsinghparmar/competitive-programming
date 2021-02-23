#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	int l = 0, r = n - 1, x = 0, y = 0, idx = 0;
	while(l <= r) {
		if(idx++ % 2) {
			if(a[l] > a[r]) y += a[l++];
			else y += a[r--];
		} else {
			if(a[l] > a[r]) x += a[l++];
			else x += a[r--];
		}
	}
	cout << x << ' ' << y;
	return 0;
}

/*
A. Sereja and Dima
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. The second line contains space-separated numbers on the cards from left to right. The numbers on the cards are distinct integers from 1 to 1000.

Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.

Examples
inputCopy
4
4 1 2 10
outputCopy
12 5
inputCopy
7
1 2 3 4 5 6 7
outputCopy
16 12
Note
In the first sample Sereja will take cards with numbers 10 and 2, so Sereja's sum is 12. Dima will take cards with numbers 4 and 1, so Dima's sum is 5.
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	pair<int,int> a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(a, a + n);
	int l = 0, r = n - 1;
	while(l <= r)
		cout << a[l++].second << ' ' << a[r--].second << '\n';

	return 0;
}

/*
It's guaranteed that n is even, so we can pair two numbers always
It's also guaranteed that the answer exists
* So, we can sort the numbers
* And pair the smallest and largest number, then second smallest and second largest, and so on
*/

/*
A. Cards
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n cards ( n is even) in the deck. Each card has a positive integer written on it. n / 2 people will play new card game. At the beginning of the game each player gets two cards, each card is given to exactly one player.

Find the way to distribute cards such that the sum of values written of the cards will be equal for each player. It is guaranteed that it is always possible.

Input
The first line of the input contains integer n (2 ≤ n ≤ 100) — the number of cards in the deck. It is guaranteed that n is even.

The second line contains the sequence of n positive integers a 1, a 2, ..., a n (1 ≤ a i ≤ 100), where a i is equal to the number written on the i-th card.

Output
Print n / 2 pairs of integers, the i-th pair denote the cards that should be given to the i-th player. Each card should be given to exactly one player. Cards are numbered in the order they appear in the input.

It is guaranteed that solution exists. If there are several correct answers, you are allowed to print any of them.

Examples
inputCopy
6
1 5 7 4 4 3
outputCopy
1 3
6 2
4 5
inputCopy
4
10 10 10 10
outputCopy
1 2
3 4
Note
In the first sample, cards are distributed in such a way that each player has the sum of numbers written on his cards equal to 8.

In the second sample, all values a i are equal. Thus, any distribution is acceptable.
*/

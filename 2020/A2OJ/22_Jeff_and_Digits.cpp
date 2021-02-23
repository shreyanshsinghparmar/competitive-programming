#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int fives = 0, zeros = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(x == 0) ++zeros;
		else ++fives;
	}
	int nin = (fives / 9) * 9;
	if(zeros == 0) cout << -1, exit(0);
	if(nin == 0) cout << 0, exit(0);
	for(int i = 0; i < nin; ++i) cout << '5';
	for(int i = 0; i < zeros; ++i) cout << '0';

	return 0;
}

/*
A. Jeff and Digits
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Jeff's got n cards, each card contains either digit 0, or digit 5. Jeff can choose several cards and put them in a line so that he gets some number. What is the largest possible number divisible by 90 Jeff can make from the cards he's got?

Jeff must make the number without leading zero. At that, we assume that number 0 doesn't contain any leading zeroes. Jeff doesn't have to use all the cards.

Input
The first line contains integer n (1 ≤ n ≤ 103). The next line contains n integers a 1, a 2, ..., a n ( a i = 0 or a i = 5). Number a i represents the digit that is written on the i-th card.

Output
In a single line print the answer to the problem — the maximum number, divisible by 90. If you can't make any divisible by 90 number from the cards, print -1.

Examples
inputCopy
4
5 0 5 0
outputCopy
0
inputCopy
11
5 5 5 5 5 5 5 5 0 5 5
outputCopy
5555555550
Note
In the first test you can make only one number that is a multiple of 90 — 0.

In the second test you can make number 5555555550, it is a multiple of 90.
*/

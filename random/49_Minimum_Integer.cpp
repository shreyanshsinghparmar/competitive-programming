#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int q;
	cin >> q;
	while(q--) {
		int l, r, d;
		cin >> l >> r >> d;
		if(d < l) cout << d << '\n';
		else {
			int divs = floor(r / d);
			cout << d * (divs + 1) << '\n';
		}
	}

	return 0;
}

/*
A. Minimum Integer
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given q queries in the following form:

Given three integers li, ri and di, find minimum positive integer xi such that it is divisible by di and it does not belong to the segment [li,ri].

Can you answer all the queries?

Recall that a number x belongs to segment [l,r] if l≤x≤r.

Input
The first line contains one integer q (1≤q≤500) — the number of queries.

Then q lines follow, each containing a query given in the format li ri di (1≤li≤ri≤109, 1≤di≤109). li, ri and di are integers.

Output
For each query print one integer: the answer to this query.

Example
inputCopy
5
2 4 2
5 10 4
3 10 1
1 2 3
4 6 5
outputCopy
6
4
1
3
10
*/

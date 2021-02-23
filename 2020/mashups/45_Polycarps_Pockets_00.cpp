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
	for(int &i : a) cin >> i;
	sort(a, a + n);
	int mx = INT_MIN, cnt = 1;
	for(int i = 0; i < n - 1; ++i) {
		if(a[i] == a[i + 1]) ++cnt;
		else mx = max(mx, cnt), cnt = 1;
	}
	cout << max(mx, cnt);

	return 0;
}

/*
It is clear that if a number occurs k times, and k is the maximum frequency:
* No more that k pockets are required, because the number with max frequency can fit in these
* And all the other numbers have at most k frequency, so k or less pockets are required for them
This can be done in 2 ways:
* Sorting - O(n log n)
* Frequency counting - O(n + max(a[i]))
*/

/*
A. Polycarp's Pockets
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp has n coins, the value of the i-th coin is ai. Polycarp wants to distribute all the coins between his pockets, but he cannot put two coins with the same value into the same pocket.

For example, if Polycarp has got six coins represented as an array a=[1,2,4,3,3,2], he can distribute the coins into two pockets as follows: [1,2,3],[2,3,4].

Polycarp wants to distribute all the coins with the minimum number of used pockets. Help him to do that.

Input
The first line of the input contains one integer n (1≤n≤100) — the number of coins.

The second line of the input contains n integers a1,a2,…,an (1≤ai≤100) — values of coins.

Output
Print only one integer — the minimum number of pockets Polycarp needs to distribute all the coins so no two coins with the same value are put into the same pocket.

Examples
inputCopy
6
1 2 4 3 3 2
outputCopy
2
inputCopy
1
100
outputCopy
1
*/

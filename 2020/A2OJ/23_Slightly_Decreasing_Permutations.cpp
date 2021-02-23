#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, k;
	cin >> n >> k;
	for(int i = n; i >= n - k + 1; --i) cout << i << ' ';
	for(int i = 1; i <= n - k; ++i) cout << i << ' ';

	return 0;
}

/*
A. Slightly Decreasing Permutations
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Permutation p is an ordered set of integers p 1,  p 2,  ...,  p n, consisting of n distinct positive integers, each of them doesn't exceed n. We'll denote the i-th element of permutation p as p i. We'll call number n the size or the length of permutation p 1,  p 2,  ...,  p n.

The decreasing coefficient of permutation p 1, p 2, ..., p n is the number of such i (1 ≤ i < n), that p i > p i + 1.

You have numbers n and k. Your task is to print the permutation of length n with decreasing coefficient k.

Input
The single line contains two space-separated integers: n, k (1 ≤ n ≤ 105, 0 ≤ k < n) — the permutation length and the decreasing coefficient.

Output
In a single line print n space-separated integers: p 1, p 2, ..., p n — the permutation of length n with decreasing coefficient k.

If there are several permutations that meet this condition, print any of them. It is guaranteed that the permutation with the sought parameters exists.

Examples
inputCopy
5 2
outputCopy
1 5 2 4 3
inputCopy
3 0
outputCopy
1 2 3
inputCopy
3 2
outputCopy
3 2 1
*/

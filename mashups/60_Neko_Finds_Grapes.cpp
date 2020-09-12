#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int &i : a) cin >> i;
	for(int &i : b) cin >> i;
	int even_a = 0, odd_a = 0, even_b = 0, odd_b = 0;
	for(int i : a) {
		if(i % 2) ++odd_a;
		else ++even_a;
	}
	for(int i : b) {
		if(i % 2) ++odd_b;
		else ++even_b;
	}
	cout << min(even_a, odd_b) + min(even_b, odd_a);

	return 0;
}

/*
For a chest to be opened by a key, the sum of their values should be odd
For a number to be odd, and be the sum of two numbers:
* One has to be odd and the other even
* because odd+odd and even+even are both even
Now, for each even valued chest, an odd valued key must be found
And for each odd valued chest, an even valued key must be found
However, if the number of keys matching is less than the number of chests,
the we can only open upto as many keys we have
Similarly, is the number of chests is less,
we can only open upto as many chests we have
* So the answer is the sum of the minimum of matching chests and keys
*/

/*
A. Neko Finds Grapes
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
On a random day, Neko found n treasure chests and m keys. The i-th chest has an integer ai written on it and the j-th key has an integer bj on it. Neko knows those chests contain the powerful mysterious green Grapes, thus Neko wants to open as many treasure chests as possible.

The j-th key can be used to unlock the i-th chest if and only if the sum of the key number and the chest number is an odd number. Formally, ai+bj≡1(mod2). One key can be used to open at most one chest, and one chest can be opened at most once.

Find the maximum number of chests Neko can open.

Input
The first line contains integers n and m (1≤n,m≤105) — the number of chests and the number of keys.

The second line contains n integers a1,a2,…,an (1≤ai≤109) — the numbers written on the treasure chests.

The third line contains m integers b1,b2,…,bm (1≤bi≤109) — the numbers written on the keys.

Output
Print the maximum number of chests you can open.

Examples
inputCopy
5 4
9 14 6 2 11
8 4 7 20
outputCopy
3
inputCopy
5 1
2 4 6 8 10
5
outputCopy
1
inputCopy
1 4
10
20 30 40 50
outputCopy
0
Note
In the first example, one possible way to unlock 3 chests is as follows:

Use first key to unlock the fifth chest,
Use third key to unlock the second chest,
Use fourth key to unlock the first chest.
In the second example, you can use the only key to unlock any single chest (note that one key can't be used twice).

In the third example, no key can unlock the given chest.
*/

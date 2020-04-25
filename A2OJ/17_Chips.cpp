#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;
 
int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	m %= (n * (n + 1)) / 2;
	for(int i = 1; i <= n; ++i) {
		if(m < i) break;
		m -= i;
	}
	cout << m;

	return 0;
}

/*
A. Chips
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are n walruses sitting in a circle. All of them are numbered in the clockwise order: the walrus number 2 sits to the left of the walrus number 1, the walrus number 3 sits to the left of the walrus number 2, ..., the walrus number 1 sits to the left of the walrus number n.

The presenter has m chips. The presenter stands in the middle of the circle and starts giving the chips to the walruses starting from walrus number 1 and moving clockwise. The walrus number i gets i chips. If the presenter can't give the current walrus the required number of chips, then the presenter takes the remaining chips and the process ends. Determine by the given n and m how many chips the presenter will get in the end.

Input
The first line contains two integers n and m (1 ≤ n ≤ 50, 1 ≤ m ≤ 104) — the number of walruses and the number of chips correspondingly.

Output
Print the number of chips the presenter ended up with.

Examples
inputCopy
4 11
outputCopy
0
inputCopy
17 107
outputCopy
2
inputCopy
3 8
outputCopy
1
Note
In the first sample the presenter gives one chip to the walrus number 1, two chips to the walrus number 2, three chips to the walrus number 3, four chips to the walrus number 4, then again one chip to the walrus number 1. After that the presenter runs out of chips. He can't give anything to the walrus number 2 and the process finishes.

In the third sample the presenter gives one chip to the walrus number 1, two chips to the walrus number 2, three chips to the walrus number 3, then again one chip to the walrus number 1. The presenter has one chip left and he can't give two chips to the walrus number 2, that's why the presenter takes the last chip.
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	int a[m];
	for(int i = 0; i < m; ++i) cin >> a[i];
	sort(a, a + m);
	int best = INT_MAX;
	for(int i = 0; i <= m - n; ++i) {
		best = min(best, a[i + n - 1] - a[i]);
	}
	cout << best;

	return 0;
}

/*
Sort the array to choose the minimum possible applying greedy strategy.
For every element, we need to check n more elements.
To do that we need to iterate over 0 to m - n, because after that index choosing n items would mean getting out of the array.
Since the array is sorted, the maximum possible value for a subarray of size n is at nth position from it's beginning and minimum is at it's beginning position.
* So, we find the difference between a[i + n - 1] (max) and a[i] (min), then get the minimum of these differences for all possible subarrays.
*/

/*
A. Puzzles
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The end of the school year is near and Ms. Manana, the teacher, will soon have to say goodbye to a yet another class. She decided to prepare a goodbye present for her n students and give each of them a jigsaw puzzle (which, as wikipedia states, is a tiling puzzle that requires the assembly of numerous small, often oddly shaped, interlocking and tessellating pieces).

The shop assistant told the teacher that there are m puzzles in the shop, but they might differ in difficulty and size. Specifically, the first jigsaw puzzle consists of f 1 pieces, the second one consists of f 2 pieces and so on.

Ms. Manana doesn't want to upset the children, so she decided that the difference between the numbers of pieces in her presents must be as small as possible. Let A be the number of pieces in the largest puzzle that the teacher buys and B be the number of pieces in the smallest such puzzle. She wants to choose such n puzzles that A - B is minimum possible. Help the teacher and find the least possible value of A - B.

Input
The first line contains space-separated integers n and m (2 ≤ n ≤ m ≤ 50). The second line contains m space-separated integers f 1, f 2, ..., f m (4 ≤ f i ≤ 1000) — the quantities of pieces in the puzzles sold in the shop.

Output
Print a single integer — the least possible difference the teacher can obtain.

Examples
inputCopy
4 6
10 12 10 7 5 22
outputCopy
5
Note
Sample 1. The class has 4 students. The shop sells 6 puzzles. If Ms. Manana buys the first four puzzles consisting of 10, 12, 10 and 7 pieces correspondingly, then the difference between the sizes of the largest and the smallest puzzle will be equal to 5. It is impossible to obtain a smaller difference. Note that the teacher can also buy puzzles 1, 3, 4 and 5 to obtain the difference 5.
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	if(n == 1 || n == 2) {
		cout << n;
		return 0;
	} else {
		int ans = 2, r, l = 0;
		for(r = 2; r < n; ++r) {
			if(a[r] == a[r - 1] + a[r - 2]) {
				ans = max(ans, r - l + 1);
			} else {
				l = r - 1;
			}
		}
		cout << ans;
	}

	return 0;
}

/*
There is at least a length 2 such that it is considered good (the first 2 elements)
The length of segment [l, r] is given by r - l + 1
For the rest of the array, iterate over all elements and get the longest good segment.
*/

/*
B. The Fibonacci Segment
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have array a 1, a 2, ..., a n. Segment [l, r] (1 ≤ l ≤ r ≤ n) is good if a i = a i - 1 + a i - 2, for all i (l + 2 ≤ i ≤ r).

Let's define len([l, r]) = r - l + 1, len([l, r]) is the length of the segment [l, r]. Segment [l 1, r 1], is longer than segment [l 2, r 2], if len([l 1, r 1]) > len([l 2, r 2]).

Your task is to find a good segment of the maximum length in array a. Note that a segment of length 1 or 2 is always good.

Input
The first line contains a single integer n (1 ≤ n ≤ 105) — the number of elements in the array. The second line contains integers: a 1, a 2, ..., a n (0 ≤ a i ≤ 109).

Output
Print the length of the longest good segment in array a.

Examples
inputCopy
10
1 2 3 5 8 13 21 34 55 89
outputCopy
10
inputCopy
5
1 1 1 1 1
outputCopy
2
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int l, r;
	cin >> l >> r;
	int ans = (l == 1 ? 1 : 0);
	for(int i = l; i <= r; ++i) {
		int divs = 0;
		for(int j = 2; j < i; ++j) {
			if(i % j == 0) ++divs;
		}
		if(divs % 2) ++ans;
	}
	cout << ans;

	return 0;
}

/*
The constraints are enough for a straight forward implementation to pass.
However, it can be proved that a number can only have odd number of divisors if it is a perfect square.
*/

/*
Odd Divisor Count
Time limit: 1000 ms
Memory limit: 128 MB

You are given two integers AA and BB. Count how many numbers in the interval [A, B][A,B] have an odd number of divisors.

Standard input
The first line contains the two integers AA and BB.

Standard output
Output a single number representing the number of values having an odd number of divisors.

Constraints and notes
1 \leq A \leq B \leq 10001≤A≤B≤1000
Input	Output
1 10
3
5 15
1
50 120
3
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	int r[6] = {100, 50, 10, 5, 2, 1};
	while(t--) {
		int n, ans = 0, i = 0;
		cin >> n;
		while(n) {
			ans += n / r[i];
			n %= r[i];
			++i;
		}
		cout << ans << '\n';
	}

	return 0;
}

/*
Smallest Number of Notes
Consider a currency system in which there are notes of seven denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Display the smallest number of notes that will combine to give N.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1200
500
242

Output
12
5
7
*/

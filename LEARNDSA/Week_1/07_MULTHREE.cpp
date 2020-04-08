#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;
	const unsigned int mod = 1e9 + 7;

	int t;
	cin >> t;
	while(t--) {
		int k, d0, d1;
		cin >> k >> d0 >> d1;
		int s = d0 + d1;
		int c = (2 * s) % 10 + (4 * s) % 10 + (8 * s) % 10 + (6 * s) % 10;
		int cycles = (k - 3) / 4;
		int ans = 0;
		if(k == 2) {
			ans = s;
		} else {
			ans = s + (s % 10) + (c * cycles);
			int left_over = (k - 3) - (cycles * 4);
			int p = 2;
			for(int i = 1; i <= left_over; ++i) {
				ans += (p * s) % 10;
				p = (p * 2) % 10;
			}
		}
		cout << (ans % 3 ? "NO\n" : "YES\n");
	}
	return 0;
}

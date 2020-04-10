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
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		sort(v.begin(), v.end(), greater<int>());
		int ans = 0, p = 0, price;
		for(int i = 0; i < n; ++i) {
			price = v[i] - p;
			if(price > 0) {
				ans += price;
				ans %= mod;
			}
			++p;
		}
		cout << ans % mod << '\n';
	}

	return 0;
}

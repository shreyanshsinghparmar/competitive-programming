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
		int n, x, ans = 0, minn = INT_MAX;
		cin >> n;
		for(int i = 0; i < n; ++i) {
			cin >> x;
			minn = min(minn, x);
			ans += minn;
		}
		cout << ans << "\n";
	}

	return 0;
}

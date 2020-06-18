#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int ans = 0, mx = INT_MIN;
	while(n--) {
		int x;
		cin >> x;
		mx = max(x, mx);
		ans += mx - x;
	}
	cout << ans;

	return 0;
}

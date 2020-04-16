#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int ans = 0;
	for(int i = 5; n / i > 0; i *= 5) {
		ans += n / i;
	}
	cout << ans;

	return 0;
}

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
		int n, s, p, v;
		cin >> n;
		int maxx = INT_MIN;
		for(int i = 0; i < n; ++i) {
			cin >> s >> p >> v;
			maxx = max(maxx, (p / ++s) * v);
		}
		cout << maxx << "\n";
	}

	return 0;
}

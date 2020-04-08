#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int g;
		cin >> g;
		while(g--) {
			int i, n, q;
			cin >> i >> n >> q;
			if(n % 2 == 0) {
				cout << n / 2 << "\n";
			} else {
				if(i == q) cout << (n - 1) / 2 << "\n";
				else cout << (n + 1) / 2 << "\n";
			}
		}
	}

	return 0;
}

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			--a[i];
		}
		if(k > n) {
			cout << n << "\n";
			break;
		}
		int freq[k] = {0};
		int distinct = 0, maxrange = 0;
		for(int l = 0, r = 0; l < n; ++l) {
			while(r < n && (freq[a[r]] || distinct < k - 1)) {
				if(!freq[a[r]]) ++distinct;
				++freq[a[r]];
				++r;
			}
			maxrange = max(maxrange, r - l);
			--freq[a[l]];
			if(!freq[a[l]]) --distinct;
		}
		cout << maxrange << "\n";
	}

	return 0;
}

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
		int arr[n];
		for(int i = 0; i < n; ++i) cin >> arr[i];
		int freq[k + 1];
		memset(freq, 0, sizeof(freq));
		freq[arr[0]] = 1;
		int l = 0, r = 0, distinct = 1, maxrange = 1;
		while(true) {
			while(++r < n && distinct < k) {
				if(freq[arr[r]] == 0) ++distinct;
				++freq[arr[r]];
				if(distinct < k) maxrange = max(maxrange, r - l + 1);
			}
			if(r == n) break;
			--r;
			while(l++ <= r && distinct == k) {
				if(freq[arr[l]] == 1) --distinct;
				--freq[arr[l]];
			}
		}
		cout << maxrange << "\n";
	}

	return 0;
}

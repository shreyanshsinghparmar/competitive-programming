#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int ans;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			int x;
			cin >> x;
			if(x) {
				ans = abs(2 - i) + abs(2 - j);
			}
		}
	}
	cout << ans;

	return 0;
}

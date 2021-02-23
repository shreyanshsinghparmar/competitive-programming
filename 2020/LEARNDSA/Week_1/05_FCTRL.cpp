#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int count = 0;
		for(int i = 5; n / i > 0; i *= 5) {
			count += n / i;
		}
		cout << count << "\n";
	}
	return 0;
}

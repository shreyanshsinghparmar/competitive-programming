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
		int n, m;
		cin >> n;
		int max;
		cin >> max;
		--n;
		int count = 1;
		while(n--) {
			int x;
			cin >> x;
			if(x <= max) {
				max = x;
				++count;
			}
		}
		cout << count << '\n';
	}

	return 0;
}

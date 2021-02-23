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
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		int startcount = 0, count = 0, flag = 0;
		for(int i : v) {
			if(startcount)
				++count;
			if(i) {
				if(!startcount)
					startcount = 1;
				else {
					if(count < 6) {
						flag = 1;
						break;
					}
				}
				count = 0;
			}
		}
		cout << (flag ? "NO\n" : "YES\n");
	}

	return 0;
}

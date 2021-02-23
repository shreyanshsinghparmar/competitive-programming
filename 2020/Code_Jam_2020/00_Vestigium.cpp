#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;
	const unsigned int mod = 1e9 + 7;

	int t;
	cin >> t;
	int tc = 0;
	while(t--) {
		++tc;
		int n, t = 0, r = 0, c = 0;
		cin >> n;
		int m[n][n];
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				cin >> m[i][j];
				if(i == j)
					t += m[i][j];
			}
		}
		for(int i = 0; i < n; ++i) {
			int flag = 0;
			for(int j = 0; j < n; ++j) {
				for(int k = j + 1; k < n; ++k) {
					if(m[i][j] == m[i][k]) {
						++r;
						flag = 1;
						break;
					}
			}
			if(flag)
				break;
			}
		}
		for(int i = 0; i < n; ++i) {
			int flag = 0;
			for(int j = 0; j < n; ++j) {
				for(int k = j + 1; k < n; ++k) {
					if(m[j][i] == m[k][i]) {
						++c;
						flag = 1;
						break;
					}
			}
			if(flag)
				break;
			}
		}
		cout << "Case #" << tc << ": " << t << ' ' << r << ' ' << c << '\n';
	}
	return 0;
}

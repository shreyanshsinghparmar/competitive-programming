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
		string s;
		cin >> s;
		int i, m = s.size();
		pair<int, int> a(0, n), b(0, n);
		for(i = 0; i < m; ++i) {
			int curr = s[i] - '0';
			if(i % 2) {
				if(curr)
					++b.first;
				--b.second;
			} else {
				if(curr)
					++a.first;
				--a.second;
			}
			if((a.first > b.first + b.second) || (b.first > a.first + a.second))
				break;
		}
		cout << (i + 1 <= m ? i + 1 : m) << "\n";
	}

	return 0;
}

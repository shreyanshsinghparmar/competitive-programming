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
		int n;
		cin >> n;
		string ans = "";
		vector<pair<int, pair<int, int>>> v;
		int start[n], end[n];
		int c = 0, j = 0, flag = 0;
		for(int i = 0; i < n; ++i) {
			cin >> start[i] >> end[i];
			v.push_back({start[i], {end[i], i}});
			ans += "C";
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; ++i) {
			if(v[i].first >= c) {
				ans[v[i].second.second] = 'C';
				c = v[i].second.first;
			} else if(v[i].first >= j) {
				ans[v[i].second.second] = 'J';
				j = v[i].second.first;
			} else {
				flag = 1;
				break;
			}
		}
		string verdict;
		if(flag) {
			verdict = "IMPOSSIBLE";
		} else {
			verdict = ans;
		}
		cout << "Case #" << tc << ": " << verdict << "\n";
	}
	return 0;
}

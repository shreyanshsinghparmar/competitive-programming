#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string employees[n];
		for(int i = 0; i < n; ++i) {
			cin >> employees[i];
		}
		string ans = "";
		map<char, int> count;
		for(int i = 0; i < n; ++i) {
			char ch = employees[i][0];
			ans += ch;
			++count[ch];
		}
		cout << ans << "\n";
		char alone;
		for(auto it : count) {
			if(it.second == 1) {
				alone = it.first;
			}
		}
		cout << "I am Alone " << alone << "\n";
	}
	return 0;
}

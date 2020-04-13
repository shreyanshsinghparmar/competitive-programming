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
		string s;
		cin >> s;
		stack<int> st;
		int n = s.size(), depth = 0;
		for(int i = 0; i < n; ++i) {
			if(s[i] == '<') {
				st.push(1);
			} else {
				if(!st.empty()) {
					st.pop();
					if(st.empty())
						depth = i + 1;
				} else {
					break;
				}
			}
		}
		cout << depth << "\n";
	}

	return 0;
}

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
		string s;
		cin >> s;
		int curr_stack = 0;
		string ans = "";
		for(char curr_char : s) {
			int curr = curr_char - '0';
			if(curr > curr_stack) {
				while(curr > curr_stack) {
					ans += "(";
					++curr_stack;
				}
				ans += curr_char;
			} else if(curr == curr_stack) {
				ans += curr_char;
			} else if(curr < curr_stack) {
				while(curr < curr_stack) {
					ans += ")";
					--curr_stack;
				}
				ans += curr_char;
			}
		}
		while(curr_stack) {
			ans += ")";
			--curr_stack;
		}
		cout << "Case #" << tc << ": " << ans << "\n";
	}
	return 0;
}

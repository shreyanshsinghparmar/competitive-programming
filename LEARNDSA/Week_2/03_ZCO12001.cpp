#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;
	const unsigned int mod = 1e9 + 7;

	int n, debug = 0;
	cin >> n;
	vector<char> v(n);
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		char c = x - 1 ? ')' : '(';
		v[i] = c;
	}
	int curr_depth = 0, max_depth = INT_MIN, depth_pos, curr_len = 0, max_len = INT_MIN, len_pos;
	for(int i = 0; i < n; ++i) {
		++curr_len;
		if(v[i] == '(')
			++curr_depth;
		else
			--curr_depth;
		if(curr_depth == 0) {
			if(curr_len > max_len) {
				max_len = curr_len;
				len_pos = i - max_len + 2;
			}
			curr_len = 0;
		}
		if(curr_depth > max_depth) {
			max_depth = curr_depth;
			depth_pos = i + 1;
		}
	}
	cout << max_depth << " " << depth_pos << " " << max_len << " " << len_pos << "\n";
	if(debug) {
		for(int i = 0; i < n; ++i)
			cout << v[i] << " ";
		cout << "\n";
	}

	return 0;
}

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; ++i) cin >> arr[i];
	stack<pair<int, int>> st;
	int ans = 1;
	for(int i = 0; i < n; ++i) {
		while(!st.empty() && st.top().first > arr[i]) {
			pair<int, int> element = st.top();
			int chaos = i - element.second + 1;
			ans *= chaos;
			ans %= mod;
			st.pop();
		}
		st.push(make_pair(arr[i], i));
	}
	cout << ans << "\n";

	return 0;
}

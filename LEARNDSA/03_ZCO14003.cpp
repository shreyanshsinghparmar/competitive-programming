#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;
	const unsigned int mod = 1e9 + 7;

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int max_profit = INT_MIN, curr_profit;
	for(int i = 0; i < n; ++i) {
		curr_profit = (n - i) * a[i];
		max_profit = max(max_profit, curr_profit);
	}
	cout << max_profit << "\n";
	return 0;
}

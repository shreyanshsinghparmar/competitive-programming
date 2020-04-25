#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, r;
	cin >> n >> r;
	int c[n];
	for(int i = 0; i < n; ++i) cin >> c[i];
	int costs[n];
	int m = 0;
	for(int i = 0; i < n; ++i)
		costs[i] = c[i] + (i + 1) * ++m;

	int count = 0, cost = 0;
	sort(costs, costs + n);
	for(int i : costs) {
		if(r - i < 0) break;
		r -= i;
		cost += i;
		++count;
	}
	cout << count << ' ' << cost;

	return 0;
}

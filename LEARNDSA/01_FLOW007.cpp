#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a = 0, m;
		while(n > 0) {
			m = n % 10;
			a = a * 10 + m;
			n /= 10;
		}
		cout << a << '\n';
	}

	return 0;
}

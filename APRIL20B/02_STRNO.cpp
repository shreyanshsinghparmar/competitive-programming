#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

// If N = P1^Y1 * P2^Y2 * ... Pk^Yk (where Pi = prime factor, Yi = number of occurences), then number of factors of N = (Y1 + 1) * (Y2 + 1) * ... * (Yk + 1)
// 60 = 2 * 2 * 15 = 2 * 2 * 3 * 5; Prime factors = 3; Total factors = pow(2, 2) * pow(3, 1) * pow(5, 1)

int f(int n) {
	int ans = 0;
	for(int i = 2; i * i <=n; ++i) {
		if(n % i == 0) {
			while(n % i == 0)
				++ans, n /= i;
		}
	}
	return ans + (n > 1);
}

int32_t main() {
	fastio;
	const unsigned int mod = 1e9 + 7;

	int t;
	cin >> t;
	while(t--) {
		int x, k;
		cin >> x >> k;
		cout << (f(x) >= k ? 1 : 0) << "\n";
	}

	return 0;
}

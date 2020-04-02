#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	while(n != 1) {
		cout << n << " ";
		if(n % 2 != 0) {
			n = n * 3 + 1;
		} else {
			n /= 2;
		}
	}
	cout << 1;
	cout << "\n";

	return 0;
}

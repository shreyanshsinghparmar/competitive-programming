#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int remove_zeros(int n) {
	int ans = 0, tens = 1;
	while(n) {
		int m = n % 10;
		if(m) ans += m * tens, tens *= 10;
		n /= 10;
	}
	return ans;
}

int32_t main() {
	fastio;

	int x, y;
	bool debug = false;
	cin >> x >> y;
	int z = x + y;

	x = remove_zeros(x);
	y = remove_zeros(y);
	z = remove_zeros(z);

	if(debug) cout << x << ' ' << y << ' ' << z << ' ';

	if(x + y == z) cout << "YES";
	else cout << "NO";

	return 0;
}

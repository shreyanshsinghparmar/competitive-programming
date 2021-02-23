#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a = 0, b = 0;
	while(n--) {
		int m, c;
		cin >> m >> c;
		if(m > c) ++a;
		else if(c > m) ++b;
	}
	if(a > b) cout << "Mishka";
	else if(b > a) cout << "Chris";
	else cout << "Friendship is magic!^^";

	return 0;
}

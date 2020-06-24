#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int x = 0, y = 0;
	while(n--) {
		char c;
		cin >> c;
		c == 'A' ? ++x : ++y;
	}
	if(x > y) cout << "Anton";
	else if(x < y) cout << "Danik";
	else cout << "Friendship";

	return 0;
}

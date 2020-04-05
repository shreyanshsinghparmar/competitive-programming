#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.length();
		int x = n / 2;
		string a = "", b = "";
		for(int i = 0; i < x; ++i) {
			a += s[i];
		}
		for(int i = n - 1; i > (n % 2 == 0 ? x - 1 : x); --i) {
			b += s[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if(a == b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}

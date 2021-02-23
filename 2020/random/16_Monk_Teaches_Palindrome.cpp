#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		string r = "";
		for(int i = s.length() - 1; i >= 0; --i) r += s[i];
		if(r == s) {
			cout << "YES ";
			cout << (s.length() % 2 == 0 ? "EVEN" : "ODD") << '\n';
		}
		else cout << "NO\n";
	}

	return 0;
}

/*
Check if a string is palindrome.
* If not, print NO
* If yes, print YES followed by EVEN if the length of string is even and odd otherwise
*/

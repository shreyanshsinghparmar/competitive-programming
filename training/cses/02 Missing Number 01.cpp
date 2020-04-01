#include <bits/stdc++.h>
 
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;
 
int32_t main() {
	// O(n) time
    fastio;
 
    int n;
    cin >> n;
	int s = (n * (n + 1)) / 2, x;
	for(int i = 0; i < n - 1; ++i) {
		cin >> x;
		s -= x;
	}
	cout << s << "\n";
 
    return 0;
}

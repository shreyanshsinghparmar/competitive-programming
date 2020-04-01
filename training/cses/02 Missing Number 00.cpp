#include <bits/stdc++.h>
 
#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;
 
int32_t main() {
	// O(n log n) time
    fastio;
 
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for(int i = 0; i < n - 1; ++i) {
		cin >> v[i];
	}
	int x = 0, i = 0;
	sort(v.begin(), v.end());
	while(x < n) {
		if(++x != v[i++]) {
			cout << x << "\n";
			break;
		}
	}
 
    return 0;
}

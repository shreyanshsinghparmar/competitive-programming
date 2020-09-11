#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, s;
	cin >> n >> s;
	int ans = s / n;
	if(s % n) ++ans;
	cout << ans;

	return 0;
}

/*
Use the coin with the highest denomination as many times as possible
* s / n gives the number of times the coin with highest denomination can be used
* if there is still something left, it will be in the range from 1 to n - 1, in the form of the remainder of s / n
* This leftover amount can be covered by a single coin, since we have coins of denominations 1 to n
*/

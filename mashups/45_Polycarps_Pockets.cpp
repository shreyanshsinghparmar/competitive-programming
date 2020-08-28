#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n], mx = INT_MIN;
	for(int &i : a) cin >> i, mx = max(mx, i);
	int freq[mx + 1];
	memset(freq, 0, sizeof(freq));
	for(int i : a) ++freq[i];
	int ans = 1;
	for(int i : freq) ans = max(ans, i);
	cout << ans;

	return 0;
}

/*
It is clear that if a number occurs k times, and k is the maximum frequency:
* No more that k pockets are required, because the number with max frequency can fit in these
* And all the other numbers have at most k frequency, so k or less pockets are required for them
This can be done in 2 ways:
* Sorting - O(n log n)
* Frequency counting - O(n + max(a[i]))
*/

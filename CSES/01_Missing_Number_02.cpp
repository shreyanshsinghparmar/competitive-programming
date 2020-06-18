#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1; i < n; ++i) {
		int x;
		cin >> x;
		sum += x;
	}
	cout << n * (n + 1) / 2 - sum;

	return 0;
}

/*
Sum of n numbers = (n * (n + 1)) / 2
Difference between sum of all given numbers and the sum of n numbers = missing number
*/

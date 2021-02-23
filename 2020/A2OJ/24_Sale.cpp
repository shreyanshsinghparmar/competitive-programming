#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);
	int ans = 0, count = 0;
	for(int i = 0; i < n; ++i) {
		if(++count > m) break;
		if(a[i] < 0) ans -= a[i];
	}
	cout << ans;

	return 0;
}

/*
B. Sale
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Once Bob got to a sale of old TV sets. There were n TV sets at that sale. TV set with index i costs a i bellars. Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus. Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets, and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.

Input
The first line contains two space-separated integers n and m (1 ≤ m ≤ n ≤ 100) — amount of TV sets at the sale, and amount of TV sets that Bob can carry. The following line contains n space-separated integers a i ( - 1000 ≤ a i ≤ 1000) — prices of the TV sets.

Output
Output the only number — the maximum sum of money that Bob can earn, given that he can carry at most m TV sets.

Examples
inputCopy
5 3
-6 0 35 -2 4
outputCopy
8
inputCopy
4 2
7 0 0 -7
outputCopy
7
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int mat[1024][1024];

int inversions(int val, int x, int y, int n) {
	int ans = 0;
	for(int i = x; i < n; ++i) {
		for(int j = y; j < n; ++j) {
			if(val > mat[i][j]) ++ans;
		}
	}
	return ans;
}

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n, ans = 0;
		cin >> n;
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < n; ++j)
				cin >> mat[i][j];
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < n; ++j) {
				ans += inversions(mat[i][j], i, j, n);
			}
		}
		cout << ans << '\n';
	}

	return 0;
}

/*
Count the number of inversions for each element of the matrix.
* Number of inversions, in a matrix is defined as the number of unordered pairs of cells {(i, j), (p, q)} such that M[i][j] > M[p][q] and i <= p & j <= q.
*/

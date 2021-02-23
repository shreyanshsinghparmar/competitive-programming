#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	bool debug = true;
	cin >> n;
	vector<pair<int, int>> v(n);
	for(int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v[i] = {x, y};
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n - 1; ++i) {
		if((v[i].first < v[i + 1].first) && (v[i].second > v[i + 1].second)) {
			cout << "Happy Alex";
			return 0;
		}
	}
	cout << "Poor Alex";

	return 0;
}

/*
A. Laptops
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day Dima and Alex had an argument about the price and quality of laptops. Dima thinks that the more expensive a laptop is, the better it is. Alex disagrees. Alex thinks that there are two laptops, such that the price of the first laptop is less (strictly smaller) than the price of the second laptop but the quality of the first laptop is higher (strictly greater) than the quality of the second laptop.

Please, check the guess of Alex. You are given descriptions of n laptops. Determine whether two described above laptops exist.

Input
The first line contains an integer n (1 ≤ n ≤ 105) — the number of laptops.

Next n lines contain two integers each, a i and b i (1 ≤ a i, b i ≤ n), where a i is the price of the i-th laptop, and b i is the number that represents the quality of the i-th laptop (the larger the number is, the higher is the quality).

All a i are distinct. All b i are distinct.

Output
If Alex is correct, print "Happy Alex", otherwise print "Poor Alex" (without the quotes).

Examples
inputCopy
2
1 2
2 1
outputCopy
Happy Alex
*/

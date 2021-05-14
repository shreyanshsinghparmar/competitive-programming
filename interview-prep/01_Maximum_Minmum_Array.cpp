#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n];
	for(int &i : a) cin >> i;
	int mn = INT_MAX, mx = INT_MIN;
	for(int i : a) {
		if(i > mx) mx = i;
		if(i < mn) mn = i;
	}
	cout << mx << ' ' << mn;

	return 0;
}

/*
Solution: O(n)
* Iterate over array, compare minimum and maximum to each element

Alternate Solution: O(n log n)
* Sort the array, print last element as maximum and first element as minimum
*/

/*
Maximum and minimum of an array using minimum number of comparisons
Difficulty Level : Medium
Last Updated : 27 Feb, 2021
Find minimum and maximum in an array. Your program should make the minimum number of comparisons.
*/

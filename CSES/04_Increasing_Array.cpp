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
	for(int i = 0; i < n; ++i) cin >> a[i];
	int ans = 0;
	for(int i = 1; i < n; ++i) {
		if(a[i] < a[i - 1]) {
			ans += a[i - 1] - a[i];
			a[i] = a[i - 1];
		}
	}
	cout << ans;

	return 0;
}

/*
For the array to be increasing, every number must be greater than or equal to the last.
* Since we need the minimum number of turns, every element must be equal to the last.
* The number of turns is the increase in the number to be equal to the last.
*/

/*
Time limit: 1.00 s Memory limit: 512 MB
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5
*/

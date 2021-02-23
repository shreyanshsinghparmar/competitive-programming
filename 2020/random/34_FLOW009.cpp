#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int q, p;
		cin >> q >> p;
		double ans = (q >= 1000) ? (q * p * 0.9) : q * p;
		printf("%0.6f\n", ans);
	}

	return 0;
}

/*
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output
Output the total expenses while purchasing items.

Constraints
1 ≤ T ≤ 1000
1 ≤ quantity,price ≤ 100000
Example
Input

3 
100 120
10 20
1200 20

Output

12000.000000
200.000000
21600.000000
*/

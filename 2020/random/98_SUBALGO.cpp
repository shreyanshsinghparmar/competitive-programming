#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, a;
	cin >> n >> a;
	while(a--) {
		if(n % 10) {
			int m = n % 10;
			n /= 10;
			n *= 10;
			n += m - 1;
		} else n /= 10;
	
	}
	cout << n;

	return 0;
}

/*
Little Praneet loves experimenting with algorithms and has devised a new algorithm. The algorithm is performed on an integer as follows:

if the rearmost digit is 0, he will erase it.
else, he will replace the rearmost digit d with d−1.
If a point comes when the integer becomes 0, the algorithm stops.

You are given an integer n. Praneet will perform the algorithm on it a times. You have to print the result after a operations.

Input:
The first and only line of input contains two integers n — initial number, and a —the number of operations.
Output:
Print one integer — the result of performing the algorithm on n a times.
Constraints
2≤n≤109
1≤a≤50
Sample Input 1
1001 2
Sample Input 2
5 2
Sample Output 1
100
Sample Output 2
3
Explanation
In the first example, the transformation is as follows: 1001−>1000−>100.
In the second example, the transformation is as follows: 5−>4−>3.
*/

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
	for(int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		int dist = ceil(sqrt(x * x + y * y));
		a[i] = dist;
	}
	sort(a, a + n);
	int q;
	cin >> q;
	while(q--) {
		int r;
		cin >> r;
		cout << upper_bound(a, a + n, r) - a << '\n';
	}

	return 0;
}

/*
We need to find index of the last point such that it is <= r^2.
* The array is sorted, so that will give the number of distances <= the given radius.
* Those distances fall in the circumference made by the circle of given radius.
*/

/*
Its time for yet another challenge, and this time it has been prepared by none other than Monk himself for Super-Hardworking Programmers like you. So, this is how it goes:

Given N points located on the co-ordinate plane, where the \(i^{th}\) point is located at co-ordinate \((x_{i}\), \(y_{i})\), you need to answer q queries.

In the \(i^{th}\) query, you shall be given an integer \(r_{i}\), and considering you draw a circle centered at the origin \((0,0)\) with radius \(r_{i}\), you need to report the number of points lying inside or on the circumference of this circle.

For each query, you need to print the answer on a new line.

Input Format :

The first line contains a single integer N denoting the number of points lying on the co-ordinate plane. Each of the next N lines contains 2 space separated integers \(x_{i}\) and \(y_{i}\), denoting the x and y co-ordintaes of the \(i^{th}\) point.

The next line contains a single integer q, denoting the number of queries. Each of the next q lines contains a single integer, where the integer on the \(i^{th}\) line denotes the parameters of the \(i^{th}\) query \(r_{i}\).

Output Format :

For each query, print the answer on a new line.

Constraints :

\( 1 \le N \le 10^5 \)

\( -10^9 \le x_{i} , y_{i} \le 10^9 \)

\( 1 \le q \le 10^5 \)

\( 0 \le r_{i} \le 10^{18} \)

SAMPLE INPUT 
5
1 1
2 2
3 3
-1 -1
4 4
2
3
32
SAMPLE OUTPUT 
3
5
Explanation
For the \(1^{st}\) query in the sample, the circle with radius equal to 3 looks like this on the co-ordinate plane

enter image description here

The points : \((1,1)\), \((-1,-1)\) and \((2,2)\) lie inside or on the circumference of the circle.
*/

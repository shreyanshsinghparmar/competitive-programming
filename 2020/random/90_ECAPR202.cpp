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
		int r;
		cin >> r;
		cout << 2 * r * r << '\n';
	}

	return 0;
}

/*
The square inscribed within a circle will have maximum area when the diagonal of the square will be equal to the diameter of the circle.
Now ,
2a^2 = (diagonal)^2
where a is side of the square

a^2=((2*R)^2)/2
a^2 =((2∗R)^2)/2
Therefore Max Area = 2*R*R
*/

/*
Chef has a circular plot of land of radius R on which he wants to construct a swimming pool. He wants the swimming pool to be square in shape with maximum possible area,so that he along with his friends can enjoy themselves during their summer vacations.

Help Chef to find out the maximum area of the swimming pool that can be constructed in his circular plot.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, R i.e the radius of the plot.
Output:
For each testcase, output in a single line answer displaying the maximum possible area of the swimming pool.

Constraints
1≤T≤1000
1≤R≤108
Sample Input:
2
5
10

Sample Output:
50
200
*/

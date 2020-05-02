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
		int n;
		cin >> n;
		cout << (n / 2) + 1 << '\n';
	}

	return 0;
}

/*
Given the size of the package A, the number of cupcakes Chef will get to eat will be N % A.
* A# being max possible value of A, [N/A#] = 1 <=> A# > N/2, and that the amount Chef gets to eat = N - A#.
* A = “least integer > N/2” = [N/2] + 1.
*/

/*
Packaging Cupcakes
Now that Chef has finished baking and frosting his cupcakes, it's time to package them. Chef has N cupcakes, and needs to decide how many cupcakes to place in each package. Each package must contain the same number of cupcakes. Chef will choose an integer A between 1 and N, inclusive, and place exactly A cupcakes into each package. Chef makes as many packages as possible. Chef then gets to eat the remaining cupcakes. Chef enjoys eating cupcakes very much. Help Chef choose the package size A that will let him eat as many cupcakes as possible.

Input
Input begins with an integer T, the number of test cases. Each test case consists of a single integer N, the number of cupcakes.

Output
For each test case, output the package size that will maximize the number of leftover cupcakes. If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.

Constraints
1 ≤ T ≤ 1000
2 ≤ N ≤ 100000000 (108)
Sample Input
2
2
5
Sample Output
2
3
Explanation
In the first test case, there will be no leftover cupcakes regardless of the size Chef chooses, so he chooses the largest possible size. In the second test case, there will be 2 leftover cupcakes.
*/

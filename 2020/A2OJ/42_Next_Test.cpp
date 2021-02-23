#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	bool is_present[3001] = {false};
	int end;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		is_present[x] = true;
		end = max(end, x);
	}
	for(int i = 1; i <= end + 1; ++i) {
		if(!is_present[i]) {
			cout << i;
			return 0;
		}
	}

	return 0;
}

/*
Find smallest integer that doesn't exist in the given set.
For that, maintain a boolean array of size 3000, initialize all values as false.
The numbers that are in the input have their values set as true in the boolean array
Iterate over the array. The first index set as false is the answer
*/

/*
A. Next Test
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
«Polygon» is a system which allows to create programming tasks in a simple and professional way. When you add a test to the problem, the corresponding form asks you for the test index. As in most cases it is clear which index the next test will have, the system suggests the default value of the index. It is calculated as the smallest positive integer which is not used as an index for some previously added test.

You are to implement this feature. Create a program which determines the default index of the next test, given the indexes of the previously added tests.

Input
The first line contains one integer n (1 ≤ n ≤ 3000) — the amount of previously added tests. The second line contains n distinct integers a 1, a 2, ..., a n (1 ≤ a i ≤ 3000) — indexes of these tests.

Output
Output the required default value for the next test index.

Examples
inputCopy
3
1 7 2
outputCopy
3
*/

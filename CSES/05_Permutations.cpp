#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	if(n == 1) {
		cout << 1;
		return 0;
	} else if(n <= 3) {
		cout << "NO SOLUTION";
		return 0;
	}
	for(int i = 2; i <= n; i += 2) cout << i << ' ';
	for(int i = 1; i <= n; i += 2) cout << i << ' ';

	return 0;
}

/*
Every even number is seperated by at least 2 from every other even number, and so is every odd number
* So, if we print even numbers and then odd ones, no two adjacent numbers will have difference 1
*/

/*
Time limit: 1.00 s Memory limit: 512 MB
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
*/

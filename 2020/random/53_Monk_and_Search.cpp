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
	sort(a, a + n);
	int q;
	cin >> q;
	while(q--) {
		int t, x;
		cin >> t >> x;
		if(!t) cout << (n - 1) - ((int) ((lower_bound(a, a + n, x)) - a - 1)) << '\n';
		else cout << (n - 1) - ((int) (upper_bound(a, a + n, x) - a - 1)) << '\n';
	}

	return 0;
}

/*
First we need to sort the array.
Finding the index of first element in A which is not less than x is called lower_bound query in C++ STL. The answer of our first query is n-lower_bound(x)
Similarly, finding the index of first element in A which is greater than x is called upper_bound query in C++ STL. The answer of our second query is n-upper_bound(x).
So, the question is how to find these bounds?
Let's see how to find lower_bound in the given array for element x.

In our binary search loop:
1. If a[mid]>=x, we know our answer would not exceed x, so we do end=mid.
2. If a[mid]< x , we do start=mid+1.
And at last start will be the index we require.

Similarly, we can find upper_bound.
*/

/*
Monk and his friend Micro are on a quest to find the answer of Life, Universe and Everything. In order to complete it they need to answer Q queries on an array A having N integers. The queries can be of following two types:
\(0 \space x:\) Find the number of numbers in A which are not less than x.
\(1 \space x:\) Find the number of numbers in A which are greater than x.
Help them complete the quest and be back in time for the next Code Monk Challenge.

Input Format:
First line consists of a single integer denoting N.
Second line consists of N space separated integers denoting the array A.
Third line consists of a single integer denoting Q.
Each of the following Q lines consists of a query of one of the given two types.

Output Format:
For each query print the required answer in new line.

Constraints:
\(1 \le N \le 10^5\)
\(1 \le Q \le 3 \times 10^5\)
\(1 \le A[i], x \le 10^9\)

SAMPLE INPUT 
4
1 2 3 4
3
0 5
1 3
0 3
SAMPLE OUTPUT 
0
1
2
Explanation
For first query, there are no numbers in the array which are not less than 5 so answer for first query is 0.
For second query, 4 is the only number greater than 3, so answer is 1.
For third query, 3 and 4 are the numbers in array which are not less than 3, so answer is 2.
*/

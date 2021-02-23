#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for(int i = 0; i < n; ++i) {
		int j = i;
		while(j > 0 && a[j] % k < a[j - 1] % k) {
			swap(a[j], a[j - 1]);
			--j;
		}
	}
	for(int i = 0; i < n; ++i) cout << a[i] << ' ';

	return 0;
}

/*
Since size of array can only be up to 10^4 we can use any sorting algorithm here, only thing we need to change is our comparison method.
To maintain the indices of the elements that have %k equal, we only compare elements with a < sign.
For every element, we sort everything to the left of it, to keep swapping an element with a lower %k till it's in it's place.
*/

/*
Monk likes to experiment with algorithms. His one such experiment is using modulo in sorting.He describes an array modulo sorted as:
Given an integer k, we need to sort the values in the array according to their modulo with k. That is, if there are two integers a and b, and \(a\%k < b\%k\), then a would come before b in the sorted array. If \(a\%k=b\%k\) , then the integer which comes first in the given array remains first in the sorted array.
Given an initial array, you need to print modulo sorted array.

Input:
The first line consists of two integers N and k, N being the number of elements in the array and k is the number with which we need to take the modulo.
The next line consists of N space separated integers , denoting the elements of the array A.

Output:
Print the modulo sorted array of the given array.

Constraints:
\(1 \le N \le 10^4\)
\(1 \le k \le 10^9\)
\(1 \le A[i] \le 10^9\); \(1\le i \le N\)

SAMPLE INPUT 
5 6
12 18 17 65 46
SAMPLE OUTPUT 
12 18 46 17 65 
Explanation
12%6=0
18%6=0
17%6=5
65%6=5
46%6=4
So, the sorted order is: 12 18 46 17 65
12 and 18 have same result on modulo , so, 12 remains first in sorted array as it is first in given array
*/

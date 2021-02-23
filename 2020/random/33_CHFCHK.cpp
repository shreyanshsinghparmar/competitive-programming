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
		int mn = INT_MAX;
		while(n--) {
			int x;
			cin >> x;
			mn = min(mn, x);
		}
		cout << mn << '\n';
	}

	return 0;
}

/*
Let the minimum element in the given array be k. Initially you make a jump of length k (jump from 0 to k) .

Claim: The length of any further jump you make is atmost k.
Proof: Assume you are making a jump with length more than k, that means you are skipping atleast k coordinates during this jump. But, one of these coordinates will be a multiple of k, hence by the constraint that the jump must be made to smallest y>x, this jump is invalid.

Hence, the length of maximum jump is k.
*/

/*
Chef Chick loves to jump a lot. Once, it realised that it was on an infinitely long road, and decided to travel along this road by jumping.

Let's view the road as the x-axis in a 1D coordinate system. Initially, Chef Chick is at the coordinate x=0, and it wants to move only in the positive x-direction. Moreover, Chef Chick has N favourite integers a1,a2,…,aN, and it wants to jump on the coordinates that are multiples of these favourite numbers — when its current position is x, it jumps to the smallest coordinate y>x such that y is an integer multiple of at least one of the values a1,a2,…,aN; the length of such a jump is y−x.

This way, Chef Chick keeps jumping along the road forever in the positive x-direction. You need to find the length of the longest jump it will make, i.e. the largest integer d such that Chef Chick makes at least one jump with length d and never makes any jump with a greater length. It can be proved that such an integer always exists.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers a1,a2,…,aN.
Output
For each test case, print a single line containing one integer — the length of the longest jump that Chick will make.

Constraints
1≤T≤100
1≤N≤100
1≤ai≤105 for each valid i
a1,a2,…,aN are pairwise distinct
Example Input
1
2
2 3
Example Output
2
Explanation
Example case 1: The sequence of coordinates on which Chef Chick would jump starts with (0,2,3,4,6,…). A longest jump is e.g. from 4 to 6, with length 2.
*/

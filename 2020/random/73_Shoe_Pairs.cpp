#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	pair<int, char> a[n];
	for(int i = 0; i < n; ++i) {
		int x;
		char y;
		cin >> x >> y;
		a[i] = {x, y};
	}
	int ans = 0;
	for(int i = 1; i <= 100; ++i) {
		int l = 0, r = 0;
		for(auto j : a) {
			if(j.first == i) {
				if(j.second == 'L') ++l;
				else ++r;
			}
		}
		int mn = min(l, r);
		ans += mn;
	}
	cout << ans;

	return 0;
}

/*
For each size between 11 and 100100 we can count how many left shoes and right shoes we have. The number of pairs of a certain size we can make is equal to the minimum of these two values.
*/

/*
Shoe Pairs
Time limit: 1000 ms
Memory limit: 128 MB

You have NN shoes, for each of them you know its size and whether it's a left or a right shoe.

Any left shoe can be paired with any right shoe of the same size. What's the maximum number of pairs you can make?

Standard input
The first line contains a single integer NN.

Each of the next NN lines describes one shoe. The line contains an integer, representing the size of the shoe, followed by a character: L in the case of a left shoe, or R in the case of a right shoe.

Standard output
Print a single integer representing the maximum number of shoe pairs.

Constraints and notes
1 \leq N \leq 10001≤N≤1000
The shoe sizes are integers between 11 and 100100
Input	Output	Explanation
5
1 L
1 L
3 R
3 L
1 R
2
We can make one pair of size 11 and one of size 33
4
2 L
2 L
2 L
3 R
0
We cannot make a pair using two left shoes.

6
1 L
2 R
2 L
2 L
1 L
1 R
2
We can make one pair of size 11 and one of size 22
*/

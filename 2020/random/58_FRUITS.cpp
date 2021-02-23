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
		int n, m, k;
		cin >> n >> m >> k;
		if(abs(n - m) <= k) cout << 0 << '\n';
		else {
			cout << max(n, m) - abs(min(n, m) + k) << '\n';
		}
	}

	return 0;
}

/*
If the difference between the number of apples and oranges is less than or equal to the number of available gold coins, the difference can be brought to zero by purchasing the fruit with the lower quantity.
Otherwise, we can only increase the quantity of the fruit with the lower amount by k (by purchasing through k gold coins).
*/

/*
Today is Chef's birthday. His mom has surprised him with truly fruity gifts: 2 fruit baskets. The first basket contains N apples, and the second one contains M oranges. Chef likes apples and oranges very much but he likes them equally, and therefore, wants to have the minimum possible difference between the number of apples and oranges he has. To do so, he can purchase 1 apple or 1 orange by paying exactly 1 gold coin (that's some expensive fruit, eh?). Chef can purchase fruits at most K times (as he has only K gold coins in his pocket) to make the difference the minimum possible.

Our little Chef is busy in celebrating his birthday to the fullest, and therefore, he has handed this job to his best friend — you. Can you help him by finding the minimum possible difference he can achieve between the number of apples and orange he owns?

Input
The first line of input contains a single integer T denoting the number of test cases. The first and only line of each test case contains 3 space separated integers — N, M and K — denoting the number of apples, number of oranges, and number of gold coins our little Chef has.

Output
For each test case, output the minimum possible difference between the number of apples and oranges that Chef can achieve.

Constraints
1 ≤ T ≤ 100
1 ≤ N, M, K ≤ 100
Example
Input
3
3 4 1
5 2 1
3 4 3

Output
0
2
0
Explanation
Test 1: Chef will buy 1 apple by paying 1 gold coin and will have equal number of apples and oranges.
Test 2: Chef will buy 1 orange by paying 1 gold coin and will have 5 apples and 3 oranges.
*/

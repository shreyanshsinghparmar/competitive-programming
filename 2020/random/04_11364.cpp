#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int t;
	for(cin >> t; t--; cout << '\n') {
		int n, maximo = INT_MIN, minimo = INT_MAX;
		cin >> n;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			maximo = max(maximo, x);
			minimo = min(minimo, x);
		}
		cout << 2 * (maximo - minimo);
	}

	return 0;
}

/*
When shopping on Long Street, Michael usually parks his car at some
random location, and then walks to the stores he needs. Can you help
Michael choose a place to park which minimises the distance he needs to
walk on his shopping round?
Long Street is a straight line, where all positions are integer. You pay
for parking in a specific slot, which is an integer position on Long Street.
Michael does not want to pay for more than one parking though. He is
very strong, and does not mind carrying all the bags around.
Input
The first line of input gives the number of test cases, 1 ≤ t ≤ 100. There are two lines for each test
case. The first gives the number of stores Michael wants to visit, 1 ≤ n ≤ 20, and the second gives
their n integer positions on Long Street, 0 ≤ xi ≤ 99.
Output
Output for each test case a line with the minimal distance Michael must walk given optimal parking.
Sample Input
2
4
24 13 89 37
6
7 30 41 14 39 42
Sample Output
152
70
*/

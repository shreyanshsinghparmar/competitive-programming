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
		string s;
		cin >> s;
		bool ok = true;
		sort(s.begin(), s.end());
		int n = s.length(), prev = s[0] - '0';
		for(int i = 1; i < n; ++i) {
			int curr = s[i] - '0';
			if(abs(curr - prev) > 2) {
				ok = false;
				break;
			}
			prev = curr;
		}
		cout << (ok ? "YES" : "NO") << '\n';
	}

	return 0;
}

/*
Markit an emerging start-up in NITP is organizing a lucky draw contest for all its customers.
In order to participate in the contest each member has to buy a lucky draw ticket. Each ticket has a number(N) printed on it. A ticket is said to be lucky, if the digits of the printed number(N) when arranged in ascending order results in a number in which the absolute difference between every 2 adjacent digits is not more than 2. Given any number(N) print whether it is lucky or not.

For example- N=6491 When arranged in ascending order results in 1469 now difference between 1 and 4 is more than 2 so N is not a lucky number

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, one integers N.
Output:
For each testcase, output in a single line answer YES or NO
Constraints
1≤T≤1000
2≤N≤108
Sample Input:
2
6491
3517
Sample Output:
NO
YES
*/

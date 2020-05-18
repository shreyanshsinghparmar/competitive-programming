#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int remove_digit(string s, int idx) {
	int ans = 0, n = s.length();
	for(int i = 0; i < n; ++i) {
		if(i == idx) continue;
		ans = ans * 10 + (s[i] - '0');
	}
	return ans;
}

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int ans = INT_MAX;
		int n = s.length();
		for(int i = 0; i < n; ++i) {
			int curr = remove_digit(s, i);
			ans = min(curr, ans);
		}
		cout << ans << '\n';
	}

	return 0;
}

/*
Each time remove exactly one digit from the number.
The least number obtained by doing this operation on all digits of the number is the answer.
*/

/*
I have a habit of asking for discounts when I'm buying something. Before you rush to call me a miser, let me tell you that I only ask for discounts if I have to pay at least 10 Rs, since asking for a discount on something that can be paid with just a few coins is really rude.

One day, I was supposed to pay N Rs, but the shopkeeper gave me an unusual offer - he told me that I can remove one of the digits in the decimal representation of N and pay only the resulting price. I am trying to figure out the minimum price I have to pay if I choose the digit to remove optimally. Would you help me, please?

Note that the resulting number after removing digit is allowed to have leading zeros. But while outputting the answer, there should be no leading zeros.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing one integer - the minimum price I have to pay.

Constraints
1≤T≤105
10≤N≤109
Example Input
3
21
132
104
Example Output
1
12
4
Explanation
Example case 1: I have two choices - remove the first digit, so the price I have to pay is 1, or remove the second digit, so the price I have to pay is 2. Obviously, the first option is better.

Example case 3: I can remove the digit 1 and then I only have to pay 4 Rs.
*/

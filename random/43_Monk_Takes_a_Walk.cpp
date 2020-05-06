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
		int count = 0;
		for(char c : s) {
			if(isalpha(c))
				c = tolower(c);
			if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
				++count;
		}
		cout << count << '\n';
	}

	return 0;
}

/*
Today, Monk went for a walk in a garden. There are many trees in the garden and each tree has an English alphabet on it. While Monk was walking, he noticed that all trees with vowels on it are not in good state. He decided to take care of them. So, he asked you to tell him the count of such trees in the garden.
Note : The following letters are vowels: 'A', 'E', 'I', 'O', 'U' ,'a','e','i','o' and 'u'.

Input:
The first line consists of an integer T denoting the number of test cases.
Each test case consists of only one string, each character of string denoting the alphabet (may be lowercase or uppercase) on a tree in the garden.

Output:
For each test case, print the count in a new line.

Constraints:
\(1 \le T \le 10\)
\(1 \le length\ of\ string \le 10^5\)

SAMPLE INPUT 
2
nBBZLaosnm
JHkIsnZtTL
SAMPLE OUTPUT 
2
1
Explanation
In test case 1, a and o are the only vowels. So, count=2
*/

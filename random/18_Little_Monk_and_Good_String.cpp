#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string s;
	cin >> s;
	int curr = 0, best = INT_MIN;
	for(char c : s) {
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ++curr;
		else {
			best = max(best, curr);
			curr = 0;
		}
	}
	best = max(best, curr);
	cout << best;

	return 0;
}

/*
Little monk loves good string. Good String is a string that only contains vowels . Now, his teacher gave him a string S. Little monk is wondering what is the length of the longest good string which is a substring of S.

Note: Strings contains only lower case English Alphabets.

Input:
First line contains a string S (1 <= |S| <= 1e5) where S denotes the length of the string.

Output:
Print an integer denoting the length of the longest good substring, that is substring consists of only vowels.
Explanation
Longest Good String which is a substring of S is aa so the answer is 2.
*/

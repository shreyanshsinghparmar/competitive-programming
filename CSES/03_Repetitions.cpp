#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string s;
	cin >> s;
	char prev = s[0];
	int ans = 1, count = 1;
	for(int i = 1; s[i]; ++i) {
		char curr = s[i];
		if(curr == prev) ++count;
		else {
			ans = max(ans, count);
			count = 1;
		}
		prev = curr;
	}
	ans = max(ans, count);
	cout << ans << '\n';

	return 0;
}

/*
Time limit: 1.00 s Memory limit: 512 MB
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/

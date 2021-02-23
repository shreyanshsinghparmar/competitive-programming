#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int k;
	string s;
	cin >> k >> s;
	if(k == 1) {
		cout << s;
		return 0;
	}

	map<char, int> m;
	for(int i = 0; s[i]; ++i) ++m[s[i]];

	string ans = "";
	for(auto i : m) {
		if(i.second % k != 0) cout << -1, exit(0);
		i.second = i.second / k;
		while(i.second--)
			ans += i.first;
	}
	while(k--) cout << ans;

	return 0;
}

/*
Use a map to store number of occurrences of every character of the string.
If any character's count is not a multiple of k, it cannot occur exactly k number of times and hence we have no answer.
Otherwise, divide the number of occurrences by k to get the number of occurrences in one substring (one), and append it to the answer string.
Now the answer string contains every character in the required substring once, in the required order
Print the answer string k times to generate a k-String of equal length.
*/

/*
A. k-String
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A string is called a k-string if it can be represented as k concatenated copies of some string. For example, the string "aabaabaabaab" is at the same time a 1-string, a 2-string and a 4-string, but it is not a 3-string, a 5-string, or a 6-string and so on. Obviously any string is a 1-string.

You are given a string s, consisting of lowercase English letters and a positive integer k. Your task is to reorder the letters in the string s in such a way that the resulting string is a k-string.

Input
The first input line contains integer k (1 ≤ k ≤ 1000). The second line contains s, all characters in s are lowercase English letters. The string length s satisfies the inequality 1 ≤ |s| ≤ 1000, where |s| is the length of string s.

Output
Rearrange the letters in string s in such a way that the result is a k-string. Print the result on a single output line. If there are multiple solutions, print any of them.

If the solution doesn't exist, print "-1" (without quotes).

Examples
inputCopy
2
aazz
outputCopy
azaz
inputCopy
3
abcabcabz
outputCopy
-1
*/

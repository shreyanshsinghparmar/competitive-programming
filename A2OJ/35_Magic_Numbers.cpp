#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int f(string s) {
	for(char c : s)
		if(c != '1' && c != '4') return 1;

	if(s[0] != '1') return 1;
	if(s.find("444") != s.npos) return 1;

	return 0;
}

int32_t main() {
	fastio;

	string s;
	cin >> s;
	if(f(s)) cout << "NO";
	else cout << "YES";

	return 0;
}

/*
A. Magic Numbers
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A magic number is a number formed by concatenation of numbers 1, 14 and 144. We can use each of these numbers any number of times. Therefore 14144, 141414 and 1411 are magic numbers but 1444, 514 and 414 are not.

You're given a number. Determine if it is a magic number or not.

Input
The first line of input contains an integer n, (1 ≤ n ≤ 109). This number doesn't contain leading zeros.

Output
Print "YES" if n is a magic number or print "NO" if it's not.

Examples
inputCopy
114114
outputCopy
YES
inputCopy
1111
outputCopy
YES
inputCopy
441231
outputCopy
NO
*/

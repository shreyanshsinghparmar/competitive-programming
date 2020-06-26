#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	map<char,int> m;
	while(n--) {
		char c;
		cin >> c;
		++m[c];
	}
	int ones = m['n'];
	int zeros = min(m['z'], m['r']);
	while(ones--) cout << 1 << ' ';
	while(zeros--) cout << 0 << ' ';

	return 0;
}

/*
Number of ones = number of 'n' because that's the only distinct character from zero
Number of zeros = z or r, whatever is minimum, because the character will more frequency is always sifficient for character with low frequency not vice versa
* For the number to be maximum, 1's must come before 0's
*/

/*
A. Cards
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
When Serezha was three years old, he was given a set of cards with letters for his birthday. They were arranged into words in the way which formed the boy's mother favorite number in binary notation. Serezha started playing with them immediately and shuffled them because he wasn't yet able to read. His father decided to rearrange them. Help him restore the original number, on condition that it was the maximum possible one.

Input
The first line contains a single integer n (1⩽n⩽105) — the length of the string. The second line contains a string consisting of English lowercase letters: 'z', 'e', 'r', 'o' and 'n'.

It is guaranteed that it is possible to rearrange the letters in such a way that they form a sequence of words, each being either "zero" which corresponds to the digit 0 or "one" which corresponds to the digit 1.

Output
Print the maximum possible number in binary notation. Print binary digits separated by a space. The leading zeroes are allowed.

Examples
inputCopy
4
ezor
outputCopy
0 
inputCopy
10
nznooeeoer
outputCopy
1 1 0 
Note
In the first example, the correct initial ordering is "zero".

In the second example, the correct initial ordering is "oneonezero".
*/

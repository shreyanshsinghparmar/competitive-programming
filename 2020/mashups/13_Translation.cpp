#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string a, b;
	cin >> a >> b;
	if(a.length() != b.length()) {
		cout << "NO";
		return 0;
	}
	int n = a.length(), i = 0, j = n - 1, cnt = 0;
	while(i < n) {
		if(a[i++] == b[j--]) ++cnt;
	}
	cout << (cnt == n ? "YES" : "NO");

	return 0;
}

/*
Compare first character with last one, second with second last one and so on
If all of the pairs are equal, it is a valid translation
*/

/*
A. Translation
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples
inputCopy
code
edoc
outputCopy
YES
inputCopy
abb
aba
outputCopy
NO
inputCopy
code
code
outputCopy
NO
*/

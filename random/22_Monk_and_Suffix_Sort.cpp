#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string s;
	int k;
	bool debug = false;
	cin >> s >> k;
	int n = s.length();
	string a[n];
	for(int i = 0, j = n; i < n; ++i, --j) {
		a[i] = s.substr(i, j);
	}
	if(debug) {
		for(int i = 0; i < n; ++i) cout << a[i] << '\n';
	}
	sort(a, a + n);
	cout << a[k - 1];

	return 0;
}

/*
Generate all suffixes of string, store them in an array, sort the array, get the Kth element of the array.
* The for loop is getting all substrings from 0 to n, then from 1 to n, and so on.
* So first it's considering a string of length n from 0 (aacb), then of length n - 1 from 1 (acb), and so on.
* Time complexity - O(N^2 N log N) -- generating substring of length K takes O(K) time.
*/

/*
Monk loves to play games. On his birthday, his friend gifted him a string S. Monk and his friend started playing a new game called as Suffix Game. In Suffix Game, Monk's friend will ask him lexicographically \(k^{th}\) smallest suffix of the string S. Monk wants to eat the cake first so he asked you to play the game.

Input Format:
First line contains a string S (\(1 \le |S| \le 25\)) and an integer k (\(1 \le k \le |S|\)).

Output Format:
Print the lexicographically \(k^{th}\) smallest suffix of the string S.

Note:
Those who are not familiar with suffix and lexicographical order, can read about it from https://en.wikipedia.org/wiki/Suffix and https://en.wikipedia.org/wiki/Lexicographical_order.

SAMPLE INPUT 
aacb 3
SAMPLE OUTPUT 
b
Explanation
All the suffices of the string are:
aacb
acb
cb
b

After sorting the order of the suffices will be:
aacb
acb
b
cb

\(3^{rd}\) smallest suffix will be b.
*/

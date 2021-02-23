#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	string a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if(i == 0) cout << 0 << '\n';
		else {
			int count = 0;
			for(int j = i; j >= 0; --j) {
				if(a[i] > a[j]) ++count;
			}
			cout << count << '\n';
		}
	}

	return 0;
}

/*
Using the concept of Insertion Sort, for each ith string, we will do a reverse loop up to the first position from i-1 and and check number of string which are smaller than the ith string and will print the count.
* O(N^2)
*/

/*
Monk's best friend Micro's birthday is coming up. Micro likes Nice Strings very much, so Monk decided to gift him one. Monk is having N nice strings, so he'll choose one from those. But before he selects one, he need to know the Niceness value of all of those. Strings are arranged in an array A, and the Niceness value of string at position i is defined as the number of strings having position less than i which are lexicographicaly smaller than \(A[i]\). Since nowadays, Monk is very busy with the Code Monk Series, he asked for your help.
Note: Array's index starts from 1.

Input:
First line consists of a single integer denoting N.
N lines follow each containing a string made of lower case English alphabets.

Output:
Print N lines, each containing an integer, where the integer in \(i^{th}\) line denotes Niceness value of string \(A[i]\).

Constraints:
\(1 \le N \le 1000\)
\(1 \le |A[i]| \le 10 \space \forall \space i \space where \space 1\le i \le N\), where \(|A[ i ]|\) denotes the length of \(i^{th}\) string.

SAMPLE INPUT 
4
a
c
d
b
SAMPLE OUTPUT 
0
1
2
1
Explanation
Number of strings having index less than 1 which are less than "a" = 0
Number of strings having index less than 2 which are less than "c": ("a") = 1
Number of strings having index less than 3 which are less than "d": ("a", "c") = 2
Number of strings having index less than 4 which are less than "b": ("a") = 1
*/

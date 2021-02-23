#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	char tab[3][3];
	for(int i = 0; i < 3; ++i)
		for(int j = 0; j < 3; ++j)
			cin >> tab[i][j];
	bool ok = true;
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < 3; ++j) {
			if(tab[i][j] != tab[2 - i][2 - j])
				ok = false;
		}
	}
	cout << (ok ? "YES" : "NO");

	return 0;
}

/*
The symmetry of the matrix is to be checked, which means:
* For every element, there should be an opposite element which is same
* For (0, 2) it's (2, 0). For (1, 2) it's (1, 0)
* It is hence easy to observe that for (i, j) it's (2 - i, 2 - j)
* Time complexity: O(1) because it is always a 3X3 matrix
*/

/*
A. Super Agent
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a very secret base in Potatoland where potato mash is made according to a special recipe. The neighbours from Porridgia decided to seize this recipe and to sell it to Pilauland. For this mission they have been preparing special agent Pearlo for many years. When, finally, Pearlo learned all secrets of espionage, he penetrated into the Potatoland territory and reached the secret base.

Now he is standing at the entrance, but to get inside he need to pass combination lock. Minute ago one of the workers entered the password on the terminal and opened the door. The terminal is a square digital keyboard 3 × 3 with digits from 1 to 9.

Pearlo knows that the password consists from distinct digits and is probably symmetric with respect to the central button of the terminal. He has heat sensor which allowed him to detect the digits which the worker pressed. Now he wants to check whether the password entered by the worker is symmetric with respect to the central button of the terminal. This fact can Help Pearlo to reduce the number of different possible password combinations.

Input
Input contains the matrix of three rows of three symbols each. Symbol «X» means that the corresponding button was pressed, and «.» means that is was not pressed. The matrix may contain no «X», also it may contain no «.».

Output
Print YES if the password is symmetric with respect to the central button of the terminal and NO otherwise.

Examples
inputCopy
XX.
...
.XX
outputCopy
YES
inputCopy
X.X
X..
...
outputCopy
NO
Note
If you are not familiar with the term «central symmetry», you may look into http://en.wikipedia.org/wiki/Central_symmetry
*/

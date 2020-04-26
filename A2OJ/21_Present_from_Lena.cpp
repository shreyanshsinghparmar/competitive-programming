#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

void print(int spaces, int max) {
	bool firstchar = true;
	for(int i = 0; i < spaces; ++i) cout << ' ';
	for(int i = 0; i <= max; ++i) {
		if(firstchar) cout << i, firstchar = false;
		else cout << ' ' << i;
	}
	for(int i = max - 1; i >= 0; --i) cout << ' ' << i;
	cout << '\n';
}

int32_t main() {
	fastio;

	int n;
	cin >> n;
	for(int i = 0, spaces = 2 * n; i <= n; ++i, spaces -= 2) print(spaces, i);
	for(int i = n - 1, spaces = 2; i >= 0; --i, spaces += 2) print(spaces, i);

	return 0;
}

/*
B. Present from Lena
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya's birthday is approaching and Lena decided to sew a patterned handkerchief to him as a present. Lena chose digits from 0 to n as the pattern. The digits will form a rhombus. The largest digit n should be located in the centre. The digits should decrease as they approach the edges. For example, for n = 5 the handkerchief pattern should look like that:


          0
        0 1 0
      0 1 2 1 0
    0 1 2 3 2 1 0
  0 1 2 3 4 3 2 1 0
0 1 2 3 4 5 4 3 2 1 0
  0 1 2 3 4 3 2 1 0
    0 1 2 3 2 1 0
      0 1 2 1 0
        0 1 0
          0
Your task is to determine the way the handkerchief will look like by the given n.

Input
The first line contains the single integer n (2 ≤ n ≤ 9).

Output
Print a picture for the given n. You should strictly observe the number of spaces before the first digit on each line. Every two adjacent digits in the same line should be separated by exactly one space. There should be no spaces after the last digit at the end of each line.

Examples
inputCopy
2
outputCopy
    0
  0 1 0
0 1 2 1 0
  0 1 0
    0
inputCopy
3
outputCopy
      0
    0 1 0
  0 1 2 1 0
0 1 2 3 2 1 0
  0 1 2 1 0
    0 1 0
      0
*/

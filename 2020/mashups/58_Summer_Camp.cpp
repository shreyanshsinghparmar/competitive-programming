#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	if(n <= 9) cout << n;
	else {
		vector<int> seq;
		for(int i = 1000; i >= 1; --i) {
			int x = i;
			while(x) {
				seq.push_back(x % 10);
				x /= 10;
			}
		}
		reverse(seq.begin(), seq.end());
		cout << seq[n - 1];
	}

	return 0;
}

/*
Every element is a digit of a number
For 1 to 10:
* 1 2 3 4 5 6 7 8 9 1 0
So, storing digits of all numbers from 1000 to 1 gives us the said sequence in reverse order
* We can now reverse the sequence and find out the element at any position
*/

/*
A. Summer Camp
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Every year, hundreds of people come to summer camps, they learn new algorithms and solve hard problems.

This is your first year at summer camp, and you are asked to solve the following problem. All integers starting with 1 are written in one line. The prefix of these line is "123456789101112131415...". Your task is to print the n-th digit of this string (digits are numbered starting with 1.

Input
The only line of the input contains a single integer n (1 ≤ n ≤ 1000) — the position of the digit you need to print.

Output
Print the n-th digit of the line.

Examples
inputCopy
3
outputCopy
3
inputCopy
11
outputCopy
0
Note
In the first sample the digit at position 3 is '3', as both integers 1 and 2 consist on one digit.

In the second sample, the digit at position 11 is '0', it belongs to the integer 10.
*/

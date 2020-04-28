#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int is_lucky(int n) {
	while(n) {
		int m = n % 10;
		if(m != 4 && m != 7) return 0;
		n /= 10;
	}
	return 1;
}

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int flag = 0;
	for(int i = 4; i <= n; ++i) {
		if(n % i == 0 && is_lucky(i)) {
			flag = 1;
			break;
		}
	}
	cout << (flag ? "YES" : "NO");

	return 0;
}

/*
A. Lucky Division
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
47
outputCopy
YES
inputCopy
16
outputCopy
YES
inputCopy
78
outputCopy
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.
*/

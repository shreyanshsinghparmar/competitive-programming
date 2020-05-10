#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int f(int n) {
	int ans = 0;
	while(n) ans += n % 10, n /= 10;
	return ans;
}

int32_t main() {
	fastio;

	int n, ans;
	cin >> n;
	if(f(n) % 4 == 0) {
		cout << n;
	} else {
		bool flag = true;
		for(int i = n + 1; flag; ++i) {
			if(f(i) % 4 == 0) {
				flag = false;
				ans = i;
			}
		}
		cout << ans;
	}

	return 0;
}

/*
A. Nearest Interesting Number
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp knows that if the sum of the digits of a number is divisible by 3, then the number itself is divisible by 3. He assumes that the numbers, the sum of the digits of which is divisible by 4, are also somewhat interesting. Thus, he considers a positive integer n interesting if its sum of digits is divisible by 4.

Help Polycarp find the nearest larger or equal interesting number for the given number a. That is, find the interesting number n such that n≥a and n is minimal.

Input
The only line in the input contains an integer a (1≤a≤1000).

Output
Print the nearest greater or equal interesting number for the given number a. In other words, print the interesting number n such that n≥a and n is minimal.

Examples
inputCopy
432
outputCopy
435
inputCopy
99
outputCopy
103
inputCopy
237
outputCopy
237
inputCopy
42
outputCopy
44
*/

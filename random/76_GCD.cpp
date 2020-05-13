#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int a, b;
	cin >> a >> b;
	cout << __gcd(a, b);

	return 0;
}

/*
Greatest Common Divisor
Time limit: 500 ms
Memory limit: 128 MB

We say that an integer DD is a divisor of another integer AA if the fraction A/DA/D is also an integer. Given two positive integers AA and BB, compute the largest number which is a divisor of both AA and BB.

Standard input
The first line contains the two integers AA and BB.

Standard output
Ouput a single number representing the greatest common divisor.

Constraints and notes
1 \leq A, B \leq 10^91≤A,B≤10
​9
​​ 
Input	Output
10 20
10
6 10
2
*/

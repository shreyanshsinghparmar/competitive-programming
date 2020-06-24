#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	char c;
	cin >> c;
	if(islower(c)) cout << 'a';
	else cout << 'A';

	return 0;
}

/*
A - αlphabet / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
100
 points

Problem Statement
An uppercase or lowercase English letter 
α
 will be given as input. If 
α
 is uppercase, print A; if it is lowercase, print a.

Constraints
α
 is an uppercase (A - Z) or lowercase (a - z) English letter.
Input
Input is given from Standard Input in the following format:

α

Output
If 
α
 is uppercase, print A; if it is lowercase, print a.

Sample Input 1 
Copy
B
Sample Output 1 
Copy
A
B is uppercase, so we should print A.

Sample Input 2 
Copy
a
Sample Output 2 
Copy
a
a is lowercase, so we should print a.
*/

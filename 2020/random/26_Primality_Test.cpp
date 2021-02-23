#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int div = 0;
		for(int i = 2; i * i <= n; ++i) {
			if(n % i == 0) {
				++div;
				break;
			}
		}
		puts(div ? "no" : "yes");
	}

	return 0;
}

/*
Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .

Input
The first line of the input contains T testcases, T lines follow

Each of T line contains an integer N which has to be tested for primality

Output
For each test case output in a separate line, "yes" if the number is prime else "no"

Constraints
- 1≤T≤20

- 1≤N≤105

Input:
5
23
13
20
1000
99991

Output:
yes
yes
no
no
yes
*/

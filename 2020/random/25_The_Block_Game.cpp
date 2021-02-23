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
		int temp = n;
		int rev = 0;
		while(n) {
			int m = n % 10;
			rev *= 10;
			rev += m;
			n /= 10;
		}
		if(temp == rev) cout << "wins\n";
		else cout << "losses\n";
	}

	return 0;
}

/*
The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is palindrome and declare if the user wins or not 

Input
The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

Output
For each input output "wins" if the number is a palindrome and "losses" if not.

Constraints
1<=T<=20
1<=N<=10000
Input:
3
331
666
343

Output:
losses
wins
wins
*/

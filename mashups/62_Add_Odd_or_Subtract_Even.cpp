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
		int a, b;
		cin >> a >> b;
		if(a < b) {
			if((b - a) % 2) cout << 1;
			else cout << 2;
		} else if(a > b) {
			if((a - b) % 2) cout << 2;
			else cout << 1;
		} else cout << 0;
		cout << '\n';
	}

	return 0;
}

/*
We can only add an odd number or subtract an even number to make the first number equal to the second
3 cases arise here:
* a = b : Nothing needs to be done
* a < b : a needs to be increased, which means we need to add odd quantities, so if the difference is odd, only one addition suffices, else, two odd quantities need to be added
* a > b : a needs to be decreases, which means we need to subtract even quantities, so if the difference is even, only one subtraction suffices, else two even quantities are to be subtracted
*/

/*
A. Add Odd or Subtract Even
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two positive integers a and b.

In one move, you can change a in the following way:

Choose any positive odd integer x (x>0) and replace a with a+x;
choose any positive even integer y (y>0) and replace a with a−y.
You can perform as many such operations as you want. You can choose the same numbers x and y in different moves.

Your task is to find the minimum number of moves required to obtain b from a. It is guaranteed that you can always obtain b from a.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤104) — the number of test cases.

Then t test cases follow. Each test case is given as two space-separated integers a and b (1≤a,b≤109).

Output
For each test case, print the answer — the minimum number of moves required to obtain b from a if you can perform any number of moves described in the problem statement. It is guaranteed that you can always obtain b from a.

Example
inputCopy
5
2 3
10 10
2 4
7 4
9 3
outputCopy
1
0
2
2
1
Note
In the first test case, you can just add 1.

In the second test case, you don't need to do anything.

In the third test case, you can add 1 two times.

In the fourth test case, you can subtract 4 and add 1.

In the fifth test case, you can just subtract 6.
*/

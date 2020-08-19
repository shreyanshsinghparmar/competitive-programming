#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int a, b;
	cin >> a >> b;
	int x = min(a, b), ans = 1;
	for(int i = 2; i <= x; ++i) ans *= i;
	cout << ans;

	return 0;
}

/*
The GCD of 2 numbers is the smallest number that divides both of them
* If observed closely
* In the example a = 4 and b = 3
* The factorials are (4 * 3 * 2 * 1) and (3 * 2 * 1) respectively
* Here, (3 * 2 * 1) = factorial of 3 is common
* So, for any 2 numbers, the factorial of the smaller number is common
* Hence, the factorial of the smaller number is a multiple of the factorial of the greater number and hence the required GCD
*/

/*
A. I'm bored with life
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Holidays have finished. Thanks to the help of the hacker Leha, Noora managed to enter the university of her dreams which is located in a town Pavlopolis. It's well known that universities provide students with dormitory for the period of university studies. Consequently Noora had to leave Vičkopolis and move to Pavlopolis. Thus Leha was left completely alone in a quiet town Vičkopolis. He almost even fell into a depression from boredom!

Leha came up with a task for himself to relax a little. He chooses two integers A and B and then calculates the greatest common divisor of integers " A factorial" and " B factorial". Formally the hacker wants to find out GCD(A!, B!). It's well known that the factorial of an integer x is a product of all positive integers less than or equal to x. Thus x! = 1·2·3·...·(x - 1)·x. For example 4! = 1·2·3·4 = 24. Recall that GCD(x, y) is the largest positive integer q that divides (without a remainder) both x and y.

Leha has learned how to solve this task very effective. You are able to cope with it not worse, aren't you?

Input
The first and single line contains two integers A and B (1 ≤ A, B ≤ 109, min(A, B) ≤ 12).

Output
Print a single integer denoting the greatest common divisor of integers A! and B!.

Example
inputCopy
4 3
outputCopy
6
Note
Consider the sample.

4! = 1·2·3·4 = 24. 3! = 1·2·3 = 6. The greatest common divisor of integers 24 and 6 is exactly 6.
*/

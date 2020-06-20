#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	bool debug = false;
	while(t--) {
		int a, b, n;
		cin >> a >> b >> n;
		int mx, mn;
		mx = max(a, b), mn = min(a, b);
		a = mx, b = mn;
		int ans = 0;
		while(true) {
			b += a;
			mx = max(a, b), mn = min(a, b);
			a = mx, b = mn;
			if(debug) cout << a << ' ' << b << '\n';
			++ans;
			if(b > n || a > n) break;
		}
		cout << ans << '\n';
	}

	return 0;
}

/*
After any operation either a or b becomes a+b. Out of the two options, clearly it is better to increase the smaller number. For example, with numbers 2,3 we can either get a pair 2,5 or 3,5; to obtain larger numbers, the last pair is better in every way.

With this we can just simulate the process and count the number of steps. The worst case is a=b=1, n=109, where each new addition produces the next element of the Fibonacci sequence. At this point we can just run the simulation and find out that 43 steps are always enough. In general, Fibonacci sequence grows exponentially, thus O(logn) steps are needed.
*/

/*
A. C+=
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
Leo has developed a new programming language C+=. In C+=, integer variables can only be changed with a "+=" operation that adds the right-hand side value to the left-hand side variable. For example, performing "a += b" when a = 2, b = 3 changes the value of a to 5 (the value of b does not change).

In a prototype program Leo has two integer variables a and b, initialized with some positive values. He can perform any number of operations "a += b" or "b += a". Leo wants to test handling large integers, so he wants to make the value of either a or b strictly greater than a given value n. What is the smallest number of operations he has to perform?

Input
The first line contains a single integer T (1≤T≤100) — the number of test cases.

Each of the following T lines describes a single test case, and contains three integers a,b,n (1≤a,b≤n≤109) — initial values of a and b, and the value one of the variables has to exceed, respectively.

Output
For each test case print a single integer — the smallest number of operations needed. Separate answers with line breaks.

Example
inputCopy
2
1 2 3
5 4 100
outputCopy
2
7
Note
In the first case we cannot make a variable exceed 3 in one operation. One way of achieving this in two operations is to perform "b += a" twice.
*/

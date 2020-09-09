#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	vector<int> ans;
	while(n) {
		if(n % 2) n -= 3, ans.push_back(3);
		else n -= 2, ans.push_back(2);
	}
	cout << ans.size() << '\n';
	for(int i : ans) cout << i << ' ';

	return 0;
}

/*
There should be maximum possible prime numbers in the answer
* So it makes sense to use the smallest prime numbers (2 and 3)
* We need both even and odd primes because if only one prime is used, we will be left with a 1, which is not prime
To deal with even numbers, subtract it with 2 (because otherwise a 1 will be left at last) and for odd with 3 (for the same reason)
*/

/*
A. Bachgold Problem
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bachgold problem is very easy to formulate. Given a positive integer n represent it as a sum of maximum possible number of prime numbers. One can prove that such representation exists for any integer greater than 1.

Recall that integer k is called prime if it is greater than 1 and has exactly two positive integer divisors — 1 and k.

Input
The only line of the input contains a single integer n (2 ≤ n ≤ 100 000).

Output
The first line of the output contains a single integer k — maximum possible number of primes in representation.

The second line should contain k primes with their sum equal to n. You can print them in any order. If there are several optimal solution, print any of them.

Examples
inputCopy
5
outputCopy
2
2 3
inputCopy
6
outputCopy
3
2 2 2
*/

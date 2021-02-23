#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	cout << n << '\n';
	while(n--) cout << "1 ";

	return 0;
}

/*
The number n needs to split into some numbers such that:
* The sum of those numbers amounts to n
* The number of distinct digits is as small as possible
* The digits need to be between 1 and 9
Notice that there is no concern for the total number of digits in the split
* so there is no reason we can't use 1+1+1+1 instead of 2+2 for 4
The sum of 1 n times is n
And the number of distinct digits here is 1 (only 1 has been used)
* So the answer is 1 printed n times
*/

/*
A. Splitting into digits
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya has his favourite number n. He wants to split it to some non-zero digits. It means, that he wants to choose some digits d1,d2,…,dk, such that 1≤di≤9 for all i and d1+d2+…+dk=n.

Vasya likes beauty in everything, so he wants to find any solution with the minimal possible number of different digits among d1,d2,…,dk. Help him!

Input
The first line contains a single integer n — the number that Vasya wants to split (1≤n≤1000).

Output
In the first line print one integer k — the number of digits in the partition. Note that k must satisfy the inequality 1≤k≤n. In the next line print k digits d1,d2,…,dk separated by spaces. All digits must satisfy the inequalities 1≤di≤9.

You should find a partition of n in which the number of different digits among d1,d2,…,dk will be minimal possible among all partitions of n into non-zero digits. Among such partitions, it is allowed to find any. It is guaranteed that there exists at least one partition of the number n into digits.

Examples
inputCopy
1
outputCopy
1
1 
inputCopy
4
outputCopy
2
2 2
inputCopy
27
outputCopy
3
9 9 9
Note
In the first test, the number 1 can be divided into 1 digit equal to 1.

In the second test, there are 3 partitions of the number 4 into digits in which the number of different digits is 1. This partitions are [1,1,1,1], [2,2] and [4]. Any of these partitions can be found. And, for example, dividing the number 4 to the digits [1,1,2] isn't an answer, because it has 2 different digits, that isn't the minimum possible number.
*/

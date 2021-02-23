#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[5] = {100, 20, 10, 5, 1}, ans = 0;
	for(int i : a) {
		while(n >= i) n -= i, ++ans;
		if(n == 0) break;
	}
	cout << ans;

	return 0;
}

/*
We need to minimize the number of bills, so we will use the denominations in decreasing order, starting from the greatest denomination
* We use a bill of a denomination until the amount left is less than that denomination, in which case, we switch to the next greatest denomination
* 125 = 100 + 20 + 5 (3)
* 245 = 100 + 100 + 20 + 20 + 5 (5)
* This is a variation of the standard greedy coin problem
*/

/*
A. Hit the Lottery
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n (1≤n≤109).

Output
Output the minimum number of bills that Allen could receive.

Examples
inputCopy
125
outputCopy
3
inputCopy
43
outputCopy
5
inputCopy
1000000000
outputCopy
10000000
Note
In the first sample case, Allen can withdraw this with a 100 dollar bill, a 20 dollar bill, and a 5 dollar bill. There is no way for Allen to receive 125 dollars in one or two bills.

In the second sample case, Allen can withdraw two 20 dollar bills and three 1 dollar bills.

In the third sample case, Allen can withdraw 100000000 (ten million!) 100 dollar bills.
*/

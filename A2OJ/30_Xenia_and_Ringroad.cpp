#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	int sum = 0, curr, prev = 1;
	while(m--) {
		cin >> curr;
		if(prev <= curr) sum += curr - prev;
		else sum += n + curr - prev;
		prev = curr;
	}
	cout << sum;

	return 0;
}

/*
If a <= b, time taken is b - a, but if a > b, time taken is n + b - a, because the sequence is clockwise and there comes a need to travel to the end of the sequence and then to the destination.
*/

/*
B. Xenia and Ringroad
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n in the clockwise order. The ringroad traffic is one way and also is clockwise.

Xenia has recently moved into the ringroad house number 1. As a result, she's got m things to do. In order to complete the i-th task, she needs to be in the house number a i and complete all tasks with numbers less than i. Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad takes one unit of time.

Input
The first line contains two integers n and m (2 ≤ n ≤ 105, 1 ≤ m ≤ 105). The second line contains m integers a 1, a 2, ..., a m (1 ≤ a i ≤ n). Note that Xenia can have multiple consecutive tasks in one house.

Output
Print a single integer — the time Xenia needs to complete all tasks.

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.

Examples
inputCopy
4 3
3 2 3
outputCopy
6
inputCopy
4 3
2 3 3
outputCopy
2
Note
In the first test example the sequence of Xenia's moves along the ringroad looks as follows: 1 → 2 → 3 → 4 → 1 → 2 → 3. This is optimal sequence. So, she needs 6 time units.
*/

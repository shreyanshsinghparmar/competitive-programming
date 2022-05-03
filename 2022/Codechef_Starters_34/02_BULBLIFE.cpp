#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int sum = 0;
		for(int i = 1; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
		}
		int ans = (n * x) - sum;
		if(ans < 0) cout << "0\n";
		else cout << ans << '\n';
	}

	return 0;
}

/*
x = (a1 + a2 + ... + an) / n
* So an = nx - (a1 + a2 + ... + a(n-1))
* Because answer can't be negative, print zero if it is negative
*/

/*
A bulb company claims that the average lifetime of its bulbs is at least X units.

The company ran a test on N bulbs. You are given the lifetime of N−1 of these bulbs. What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers N and X - denoting the number of test bulbs and the minimum average lifetime of bulbs in the company's claim.
The second line of each test case contains N−1 space-separated integers A1,A2,…,AN−1 denoting the lifetimes of N−1 of the test bulbs.
Output Format
For each testcase, output the minimum non-negative integer value of lifetime the remaining bulb can have such that the claim of the company holds true.

Constraints
1≤T≤100
2≤N≤100
0≤Ai≤1000
1≤X≤1000
Sample Input 1 
3
3 4
1 5
4 2
5 8 6
3 1000
0 0
Sample Output 1 
6
0
3000
Explanation
Let Y denote the value of the lifetime of the remaining bulb.

Test case 1: The remaining bulb must have lifetime no less than 6 units. The average lifetime with Y=6 is (1+5+6)3=4≥X. It can be proven that for any non-negative integer value of Y<6 it is not possible to have an average lifeftime of at least X=4.

Test case 2: The average lifetime with Y=0 is (5+8+6+0)4=4.75≥X. Thus the minimum non negative value which satisfies the condition is Y=0.
*/

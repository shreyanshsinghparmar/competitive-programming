#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n], sum = 0;
	for(int &i : a) cin >> i, sum += i;
	int m;
	cin >> m;
	int q[m];
	for(int &i : q) cin >> i;
	sort(a, a + n, greater<int>());
	for(int i : q)
		cout << sum - a[i - 1] << '\n';

	return 0;
}

/*
For each q, we have to pay for q - 1 most expensive chocolate bars
And also for every bar that comes after it
* Which means, the only thing we don't have to pay for is the qth most expensive chocolate bar
* So, it makes sense to sort the array in descending order
* And omit every qth most expensive bar from the total sum of money
* Which can be done by subtracting the price of qth most expensive bar from the total sum
* (Note that it is optimal to choose the most expensive q chocolates every time. That way the most expensive qth chocolate's price will be omitted)
*/

/*
B. Discounts
time limit per test2.5 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You came to a local shop and want to buy some chocolate bars. There are n bars in the shop, i-th of them costs ai coins (and you want to buy all of them).

You have m different coupons that allow you to buy chocolate bars. i-th coupon allows you to buy qi chocolate bars while you have to pay only for the qi−1 most expensive ones (so, the cheapest bar of those qi bars is for free).

You can use only one coupon; if you use coupon i, you have to choose qi bars and buy them using the coupon, and buy all the remaining n−qi bars without any discounts.

To decide which coupon to choose, you want to know what will be the minimum total amount of money you have to pay if you use one of the coupons optimally.

Input
The first line contains one integer n (2≤n≤3⋅105) — the number of chocolate bars in the shop.

The second line contains n integers a1, a2, ..., an (1≤ai≤109), where ai is the cost of i-th chocolate bar.

The third line contains one integer m (1≤m≤n−1) — the number of coupons you have.

The fourth line contains m integers q1, q2, ..., qm (2≤qi≤n), where qi is the number of chocolate bars you have to buy using i-th coupon so that the least expensive of them will be for free. All values of qi are pairwise distinct.

Output
Print m integers, i-th of them should be the minimum amount of money you have to pay if you buy qi bars with i-th coupon, and all the remaining bars one by one for their full price.

Example
inputCopy
7
7 1 3 1 4 10 8
2
3 4
outputCopy
27
30
Note
Consider the first example.

If we use the first coupon, we may choose chocolate bars having indices 1, 6 and 7, and we pay 18 coins for them and 9 coins for all other bars.

If we use the second coupon, we may choose chocolate bars having indices 1, 5, 6 and 7, and we pay 25 coins for them and 5 coins for all other bars.
*/

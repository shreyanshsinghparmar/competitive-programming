#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	int count = 1, ans = INT_MIN;
	for(int i = 1; i < n; ++i) {
		if(a[i] >= a[i - 1]) ++count;
		else ans = max(ans, count), count = 1;
	}
	ans = max(ans, count);
	cout << ans;

	return 0;
}

/*
A. Kefa and First Steps
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes a i money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence a i. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).

The second line contains n integers a 1,  a 2,  ...,  a n (1 ≤ a i ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

Examples
inputCopy
6
2 2 1 3 4 1
outputCopy
3
inputCopy
3
2 2 9
outputCopy
3
Note
In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.
*/

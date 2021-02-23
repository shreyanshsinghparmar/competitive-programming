#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	vector<int> neg, pos, zer;
	for(int i : a) {
		if(i < 0) neg.push_back(i);
		else if(i > 0) pos.push_back(i);
		else zer.push_back(i);
	}
	if(neg.size() % 2 == 0) {
		zer.push_back(neg[neg.size() - 1]);
		neg.pop_back();
	}
	if(pos.size() == 0) {
		pos.push_back(neg[neg.size() - 1]);
		pos.push_back(neg[neg.size() - 2]);
		neg.pop_back();
		neg.pop_back();
	}
	cout << neg.size() << ' ';
	for(int i : neg) cout << i << ' ';
	cout << '\n' << pos.size() << ' ';
	for(int i : pos) cout << i << ' ';
	cout << '\n' << zer.size() << ' ';
	for(int i : zer) cout << i << ' ';

	return 0;
}

/*
A. Array
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vitaly has an array of n distinct integers. Vitaly wants to divide this array into three non-empty sets so as the following conditions hold:

The product of all numbers in the first set is less than zero ( < 0).
The product of all numbers in the second set is greater than zero ( > 0).
The product of all numbers in the third set is equal to zero.
Each number from the initial array must occur in exactly one set.
Help Vitaly. Divide the given array.

Input
The first line of the input contains integer n (3 ≤ n ≤ 100). The second line contains n space-separated distinct integers a 1, a 2, ..., a n (|a i| ≤ 103) — the array elements.

Output
In the first line print integer n 1 (n 1 > 0) — the number of elements in the first set. Then print n 1 numbers — the elements that got to the first set.

In the next line print integer n 2 (n 2 > 0) — the number of elements in the second set. Then print n 2 numbers — the elements that got to the second set.

In the next line print integer n 3 (n 3 > 0) — the number of elements in the third set. Then print n 3 numbers — the elements that got to the third set.

The printed sets must meet the described conditions. It is guaranteed that the solution exists. If there are several solutions, you are allowed to print any of them.

Examples
inputCopy
3
-1 2 0
outputCopy
1 -1
1 2
1 0
inputCopy
4
-1 -2 -3 0
outputCopy
1 -1
2 -3 -2
1 0
*/

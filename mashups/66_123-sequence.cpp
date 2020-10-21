#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	map<int, int> freq;
	while(n--) {
		int x;
		cin >> x;
		++freq[x];
	}
	int mx = INT_MIN, mx_n;
	for(auto it : freq) {
		if(it.second > mx) {
			mx = it.second;
			mx_n = it.first;
		}
	}
	int ans = 0;
	for(auto it : freq) {
		if(it.first == mx_n && it.second == mx) continue;
		else ans += it.second;
	}
	cout << ans;

	return 0;
}

/*
There are only 3 numbers
* So for replacing the least amount of numbers
* We have to replace the digits that have the least frequencies
* For example in (1 3 2 2 2 1 1 2 3), 2 has the maximum frequency, so replacing that will cost maximum replacements
* So for the replacements to be minimum, all the 1's and 3's have to be replaced
Note that we can afford to traverse the map multiple times because it only consists of 3 elements
*/

/*
A. 123-sequence
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a given sequence of integers a1, a2, ..., an, where every number is from 1 to 3 inclusively. You have to replace the minimum number of numbers in it so that all the numbers in the sequence are equal to each other.

Input
The first line contains an integer n (1 ≤ n ≤ 106). The second line contains a sequence of integers a1, a2, ..., an (1 ≤ ai ≤ 3).

Output
Print the minimum number of replacements needed to be performed to make all the numbers in the sequence equal.

Examples
inputCopy
9
1 3 2 2 2 1 1 2 3
outputCopy
5
Note
In the example all the numbers equal to 1 and 3 should be replaced by 2.
*/

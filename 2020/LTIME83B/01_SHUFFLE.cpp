#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	for(cin >> t; t--; cout << '\n') {
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		string ans = "yes";
		for(int i = 0; i < k; ++i) {
			vector<int> p, q;
			for(int j = i; j < n; j += k) {
				p.push_back(a[j]);
				q.push_back(b[j]);
			}
			sort(p.begin(), p.end());
			if(p != q) ans = "no";
		}
		cout << ans;
	}

	return 0;
}

/*
We can sort only every Kth element from an index.
* We can move some element from position p to position q if and only if |p-q| is divisible by K
So, we form K such arrays with indices i, i + k, ...
* Hence, we can divide the given array into K list, i-th list having all elements at positions p such that p % K is i. It’s easy to see that we can swap any pair of elements within the list.
We sort every such array and see if it equals the subsequence of the already sorted array.
If those arrays are equal we can sort, otherwise we can't.
*/

/*
Chef got another sequence as a birthday present. He does not like this sequence very much because it is not sorted. Since you are a good programmer, Chef is asking for your help.

You are given a sequence A1,A2,…,AN and an integer K. You may perform any number of operations of the following type (in any order): choose a valid integer i and swap Ai with Ai+K. Can you sort the sequence this way?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing the string "yes" if the sequence can be sorted or "no" otherwise (without quotes).

Constraints
1≤T≤100
1≤K≤N≤105
1≤Ai≤109 for each valid i
the sum of N over all test cases does not exceed 106
Subtasks
Subtask #1 (50 points): the sequence A is a permutation of the integers 1 through N
Subtask #2 (50 points): original constraints

Example Input
2
4 1
1 4 2 3
4 2
1 4 2 3
Example Output
yes
no
Explanation
Example case 1: We may freely swap adjacent elements, so the sequence can be sorted e.g. in the following way: (1,4,2,3)→(1,2,4,3)→(1,2,3,4).
*/

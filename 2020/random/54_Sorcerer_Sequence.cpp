#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int x = n, prev = n, idx = 1;
		cout << x << ' ';
		while(x != 1) {
			if(prev % 2 == 0) x = sqrt(prev);
			else x = prev * sqrt(prev);
			cout << x << ' ';
			++idx, prev = x;
		}
		cout << '\n';
	}

	return 0;
}

/*
Sorcerer Sequence
Sorcerer Sequence is a series of integer numbers in which the first term starts with a positive integer and the remaining terms are generated from the immediate previous term using the below recurrence relation :

a
k
+
1
 ​=
a
1
/
2
k
￼ for even 
a
k

a
k
+
1
 ​=
a
3
/
2
k
￼ for odd 
a
k

Given a number 
N
 your task is to print the space-separated Sorcerer Sequence using this number as the first term of the sequence.

Input Format
First-line contains an integer 
T
, where 
T
 is the number of test cases.
For every Test case, there is only one integer input 
N
.

Output Format
For each test case, in a new line print, the space-separated Sorcerer sequence for number 
N
 as the first term of the sequence.

Constraints
1
<=
T
<=
100

1
<=
N
<=
100

Time Limit
1 second

Example
Input1
2
8
5

Output
8 2 1
5 11 36 6 2 1

Explanation
In the first test case, we start with 
8
 and use the above formula to get the next terms, until we reach 
1
.
In the second test case, we start with 
5
, next digit is (sqrt(5)*sqrt(5)*sqrt(5)) = 
11
, and so on.
*/

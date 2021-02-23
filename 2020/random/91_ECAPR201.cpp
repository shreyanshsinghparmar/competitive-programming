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
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		cout << s[0] << '\n';
	}

	return 0;
}

/*
The shortest palindrome is one with only one character.
So, sort the string.
First character of sorted string gives the lexicographically smalled palindrome.
*/

/*
Given a string consisting of only lowercase English alphabets, your task is to find the smallest palindromic substring. In case there are multiple palindromic substrings of the same length present, print the lexicographically smallest substring.

Formally, a substring is a contiguous sequence of characters within a string. So in a string "abcdef", "abc" is a substring whereas "adf" is not a substring.

A palindrome is a word, phrase, or sequence that reads the same backwards as forwards, e.g. madam or mom.

Input:
First-line will contain T, the number of test cases. Then the test cases follow.
Each test case contains of two lines of input, two integers.
First, we have a single integer N which signifies the length of the substring.
Next, we have a string of length N that only has lowercase English alphabets.
Output:
For each testcase, output in a single line the shortest palindromic substring.

Constraints
1≤T≤100
2≤N≤105
Sample Input:
    2
    2
    zy
    1
    cd
Sample Output:
    y
    c
EXPLANATION:
There are only two possibilities. "z" and "y". Since both of them have the same length. We print the lexicographically smaller substring which is y.
*/

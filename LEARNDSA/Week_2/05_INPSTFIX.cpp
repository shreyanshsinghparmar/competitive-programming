#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int prec(char c) {
	if(c == '^') return 3;
	if(c == '*' || c == '/') return 2;
	if(c == '+' || c == '-') return 1;
	return 0;
}

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		stack<char> st;
		while(n--) {
			char c;
			cin >> c;
			if(c >= 'A' && c <= 'Z') cout << c;
			else if(c == '(') st.push(c);
			else if(c == ')') {
					while(!st.empty() && st.top() != '(') {
						cout << st.top();
						st.pop();
					}
					if(!st.empty() && st.top() == '(') st.pop();
				} else {
					while(!st.empty() && prec(c) <= prec(st.top())) {
						cout << st.top();
						st.pop();
					}
					st.push(c);
				}
			}
		while(!st.empty()) {
			if(st.top() != '(') cout << st.top();
			st.pop();
		}
		cout << '\n';
	}

	return 0;
}

/*
Postfix expression is one where the operator comes after the operands
* A + B is represented as AB+
For converting infix to postfix, a stack can be utilized
* Only the operators change position, so it is safe to print all operands in the given order
* For (A + B) * C, which is equivalend to AB+C*, + comes first because of the parantheses
* So, whenever a paranthesis, it is safe to say an operator of higher precedence will be coming, so we can print the operator that operates on the operators inside the parantheses that have been closed
* Hence, a stack that takes ( and the operators should be utlized
* Whenever a ) is seen, the stack's contents are printed until a ( is seen to match the )
* At last, any operators that have been left in the stack need to be printed
*/

/*
You are given an infix expression S of length N. You need to convert the given expression S to its postfix equivalent using stack.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the length of S.
The second line contains a string S, the infix expression.
Output
For each test case print a single line containing the postfix equivalent for the given infix expression.

Constraints
1≤T≤10
1≤N≤102
S contains only uppercase English letters (A...Z), and these characters - (,),+,−,∗,/,^. S is a valid infix expression.
Example Input
2
15
((A+B)*D)^(E-F)
19
A+(B*C-(D/E^F)*G)*H
Example Output
AB+D*EF-^
ABC*DEF^/G*-H*+
Explanation
Example case 1: The postfix equivalent for ((A+B)∗D)^(E−F) is AB+D∗EF−^.
*/

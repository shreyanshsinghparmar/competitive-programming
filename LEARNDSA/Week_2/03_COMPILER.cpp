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
		string s;
		cin >> s;
		stack<int> st;
		int depth = 0;
		for(int i = 0; s[i]; ++i) {
			if(s[i] == '<') {
				st.push(1);
			} else {
				if(!st.empty()) {
					st.pop();
					if(st.empty()) depth = i + 1;
				} else {
					break;
				}
			}
		}
		cout << depth << '\n';
	}

	return 0;
}

/*
For every opening <, we push an element onto the stack.
For every closing >:
* If the stack is not empty, pop an element off of the stack. When the stack becomes empty this way, a valid sequence has ended, so the depth is the current index of the given sequence.
* If the stack is empty, it means either the string has just begun, or a valid sequence has ended before, so we break if there is a > that doesn't correspond to a previous <.
* When a > doesn't correspond to a previous <, the sequence is no longer valid and the previously recorded depth is the longest depth for a valid sequence, so break.
*/

/*
Lira is now very keen on compiler development. :)

She knows that one of the most important components of a compiler, is its parser.

A parser is, in simple terms, a software component that processes text, and checks it's semantic correctness, or, if you prefer, if the text is properly built.

As an example, in declaring and initializing an integer, in C/C++, you can't do something like:

int = x ;4

as the semantics of such statement is incorrect, as we all know that the datatype must precede an identifier and only afterwards should come the equal sign and the initialization value, so, the corrected statement should be:

int x = 4;

Today, Lira is concerned with an abstract instruction which is composed of the characters "<" and ">" , which she will use on the design of her language, L++ :D.

She is using it as an abstraction for generating XML code Tags in an easier fashion and she understood that, for an expression to be valid, a "<" symbol must always have a corresponding ">" character somewhere (not necessary immediately) after it. Moreover, each ">" symbol should correspond to exactly one "<" symbol.

So, for instance, the instructions:

<<>>

<>

<><>

are all valid. While:

>>

><><

are not.

Given some expressions which represent some instructions to be analyzed by Lira's compiler, you should tell the length of the longest prefix of each of these expressions that is valid, or 0 if there's no such a prefix.

Input
Input will consist of an integer T denoting the number of test cases to follow.

Then, T strings follow, each on a single line, representing a possible expression in L++.

Output
For each expression you should output the length of the longest prefix that is valid or 0 if there's no such a prefix.
Constraints
1 ≤ T ≤ 500
1 ≤ The length of a single expression ≤ 106
The total size all the input expressions is no more than 5*106
 

Example
Input:
3
<<>>
><
<>>>
Output:
4
0
2
*/

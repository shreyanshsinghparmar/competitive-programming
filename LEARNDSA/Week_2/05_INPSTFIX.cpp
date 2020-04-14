#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int prec(char c) {
	if(c == '^')
		return 3;
	else if(c == '*' || c == '/')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return 0;
}

int32_t main() {
	fastio;
	const unsigned int mod = 1e9 + 7;

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		stack<char> st;
		st.push('#');
		for(char c : s) {
			if(c >= 'A' && c <= 'Z') {
				cout << c;
			} else if(c == '(') {
				st.push('(');
			} else if(c == ')') {
				while(st.top() != '#' && st.top() != '(') {
					char ch = st.top();
					st.pop();
					cout << ch;
				}
				if(st.top() == '(') {
					st.pop();
				}
			} else {
				while(st.top() != '#' && prec(c) <= prec(st.top())) {
					char ch = st.top();
					st.pop();
					cout << ch;
				}
				st.push(c);
			}
		}
		while(st.top() != '#') {
			char ch = st.top();
			st.pop();
			cout << ch;
		}
		cout << "\n";
	}

	return 0;
}

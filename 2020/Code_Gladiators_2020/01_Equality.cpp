#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int lower = 0, upper = 0, numbers = 0, symbols = 0;
		string str;
		cin >> str;
		for(int i = 0; i < str.length(); ++i) {
			char curr = str[i];
			if(islower(curr)) {
				++lower;
			} else if(isupper(curr)) {
				++upper;
			} else if(isdigit(curr)) {
				++numbers;
			} else {
				++symbols;
			}
		}
		if(lower == upper && upper == numbers && numbers == symbols) {
			cout << "Equality For Everyone\n";
		} else {
			cout << "No Equality\n";
		}
	}
	return 0;
}

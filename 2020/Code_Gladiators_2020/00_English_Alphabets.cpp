#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	char vowelsarr[5] = {'a', 'e', 'i', 'o', 'u'};
	while(t--) {
		string str;
		cin >> str;
		int vowels = 0, consonants = 0, isvowel = 0;
		for(int i = 0; i < str.length(); ++i) {
			isvowel = 0;
			for(int j = 0; j < 5; ++j) {
				if(str[i] == vowelsarr[j]) {
					++vowels;
					isvowel = 1;
					break;
				}
			}
			if(!isvowel) {
				++consonants;
			}
		}
		int product = vowels * consonants;
		cout << vowels << " " << consonants << " " << product << "\n";
	}
	return 0;
}

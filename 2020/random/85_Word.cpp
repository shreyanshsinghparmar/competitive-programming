#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string s;
	cin >> s;
	int low = 0, up = 0;
	for(char c : s) {
		if(islower(c)) ++low;
		else ++up;
	}
	string ans = "";
	if(low == up) {
		for(char c : s) {
			if(isupper(c)) ans += tolower(c);
			else ans += c;
		}
	} else if(low > up) {
		for(char c : s) {
				if(isupper(c)) ans += tolower(c);
				else ans += c;
		}
	} else {
		for(char c : s) {
			if(islower(c)) ans += toupper(c);
			else ans += c;
		}
	}
	cout << ans;

	return 0;
}

/*
A. Word
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

Examples
inputCopy
HoUse
outputCopy
house
inputCopy
ViP
outputCopy
VIP
inputCopy
maTRIx
outputCopy
matrix
*/

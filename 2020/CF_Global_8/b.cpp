#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int a[10], k;

bool isValid() {
	int p = 1;
	for(int i : a) {
		p *= i;
		if(p >= k) return true;
	}
	return false;
}

int32_t main() {
	fastio;

	cin >> k;
	string s = "codeforces";
	if(k == 1) {
		cout << s;
		return 0;
	}
	for(int i = 0; i < 10; ++i) a[i] = 1;
	int i = 0;
	while(true) {
		if(i > 9) i = 0;
		++a[i];
		if(isValid()) break;
		++i;
	}
	for(int i = 0; i < 10; ++i) {
		while(a[i]--) cout << s[i];
	}

	return 0;
}

/*
Suppose that instead of codeforces subsequences we're looking for, say, abcde subsequences. Then in an optimal string all a's appear at the front. Indeed, moving any other occurence of a to the front will leave all the other occurences intact, and can only possibly create new ones. For a similar reason, all b's should immediately follow, then go all c's, and so on.

The only question is how many a's, b's, etc should we take. The answer is we should have quantities of each letter as close as possible to each other. Indeed, the number of subsequences is na×nb×…×ne, where na,nb,… are the number of occurences of each letter. If, say, na−nb>1, then it is not hard to show that transforming an a to a b increases the product. Now the optimal distribution can be obtained simply by increasing na,nb,… one by one in a loop. We should stop once the product is at least k.

This approach will, however, not work quite as well if the subsequence has repeated letters. Still, it is natural to expect that the same pattern applies to optimal strings with codeforces subsequences: it has a lot of unique letters, and repeated letters are far apart. It was hardly necessary, but here's one way to prove that the pattern works (math and casework alert):

Letters d, f, r, s should form consecutive blocks. If, say, two d's are separated by other letters, we can look which d is present in fewer number of subsequences, and more it next to the more popular one. The same argument works for all other letters.
It doesn't make sense to put anything other than e's between d's and f's. Indeed, any other letter won't be present in any subsequences. Similarly, there can only be o's between f's and r's. Now we know the string looks like ???dddeeefffooorrr???sss.
Finally, only c's and o's can precede d's, and it doesn't make sense to place o's before c's. Similarly, c's and e's in this order occupy the space between r's and s's.
It follows that the same solution as above can be applied to solve this problem.
*/

/*
B. Codeforces Subsequences
time limit per test2 seconds
memory limit per test512 megabytes
inputstandard input
outputstandard output
Karl likes Codeforces and subsequences. He wants to find a string of lowercase English letters that contains at least k subsequences codeforces. Out of all possible strings, Karl wants to find a shortest one.

Formally, a codeforces subsequence of a string s is a subset of ten characters of s that read codeforces from left to right. For example, codeforces contains codeforces a single time, while codeforcesisawesome contains codeforces four times: codeforcesisawesome, codeforcesisawesome, codeforcesisawesome, codeforcesisawesome.

Help Karl find any shortest string that contains at least k codeforces subsequences.

Input
The only line contains a single integer k (1≤k≤1016).

Output
Print a shortest string of lowercase English letters that contains at least k codeforces subsequences. If there are several such strings, print any of them.

Examples
inputCopy
1
outputCopy
codeforces
inputCopy
3
outputCopy
codeforcesss
*/

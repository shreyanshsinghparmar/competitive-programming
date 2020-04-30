#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a = 0, b = 0;
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(x == 100) ++a;
		else ++b;
	}
	if(a == 0) {
		if(b % 2 == 0) cout << "YES";
		else cout << "NO";
	} else if(a % 2 == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}

/*
If number of 100 gram apples are zero, all that's left to be divided are 200 gram apples.
So, if that is even, it is possible to evenly distribute such that the weight is equally distributed.
If there are some number of 100 gram apples, and the number of such apples is even, the number of 200 gram apples becomes n - (number of 100 gram apples)
* So, it implies that one person can have all 100 gram apples and other can have all 200 gram apples (if n is even)
* If n is odd, one person can have (number of 100 gram apples - 1) 100 gram apples, giving one 100 gram apple to the other person, still making the weights evenly distributed.
*/

/*
A. Kitahara Haruki's Gift
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Kitahara Haruki has bought n apples for Touma Kazusa and Ogiso Setsuna. Now he wants to divide all the apples between the friends.

Each apple weights 100 grams or 200 grams. Of course Kitahara Haruki doesn't want to offend any of his friend. Therefore the total weight of the apples given to Touma Kazusa must be equal to the total weight of the apples given to Ogiso Setsuna.

But unfortunately Kitahara Haruki doesn't have a knife right now, so he cannot split any apple into some parts. Please, tell him: is it possible to divide all the apples in a fair way between his friends?

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of apples. The second line contains n integers w 1, w 2, ..., w n ( w i = 100 or w i = 200), where w i is the weight of the i-th apple.

Output
In a single line print "YES" (without the quotes) if it is possible to divide all the apples between his friends. Otherwise print "NO" (without the quotes).

Examples
inputCopy
3
100 200 100
outputCopy
YES
inputCopy
4
100 100 100 200
outputCopy
NO
Note
In the first test sample Kitahara Haruki can give the first and the last apple to Ogiso Setsuna and the middle apple to Touma Kazusa.
*/

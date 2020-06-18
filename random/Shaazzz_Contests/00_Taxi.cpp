#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int freq[5];

int32_t main() {
	fastio;

	int n;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		++freq[x];
	}
	int ans = freq[4] + freq[3] + freq[2] / 2;
	while(freq[3]--) {
		if(freq[1]) --freq[1];
	}
	if(freq[2] % 2 != 0) {
		freq[2] %= 2;
		while(freq[2]--) {
			if(freq[1]) freq[1] -= 2;
			++ans;
		}
	}
	while(freq[1] > 0) freq[1] -= 4, ++ans;

	cout << ans;

	return 0;
}

/*
Choose the 3 and 1 as much as possible. And let 2 combine with themselves. If there are more 1s and 2s, let two 1s combine with 2, and every four 1s take same taxi.
* First, the answer is number of 4's, 3's and 2's (2's clubbed with other 2's)
* Now we decrease number of 3's, possibly 1's if they exist
* Then the remaining 2's clubbed with 1's if possible, and answer is increased
* Then remaining 1's are c;ubbed in groups of 4, or less than 4
*/

/*
A. Taxi
time limit per test3.0 s
memory limit per test256 MB
inputstandard input
outputstandard output
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
inputCopy
5
1 2 4 3 3
outputCopy
4
inputCopy
8
2 3 4 4 2 1 3 1
outputCopy
5
Note
In the first test we can sort the children into four cars like this:

the third group (consisting of four children),
the fourth group (consisting of three children),
the fifth group (consisting of three children),
the first and the second group (consisting of one and two children, correspondingly).
There are other ways to sort the groups into four cars.
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int ans = 0;
	int tfs = min(min(k2, k5), k6);
	ans += 256 * tfs;
	k2 -= tfs, k5 -= tfs, k6 -= tfs;
	int tt = min(k2, k3);
	ans += 32 * tt;
	k2 -= tt, k3 -= tt;
	cout << ans;

	return 0;
}

/*
Total number of 256's to be added is the minimum of number of 2's, 5's, and 6's
Similarly, number of 32's possible to be added is the minimum of number of 3's and 2's
* Because to form a number all digits must be present and minimum count of the number of digits available is the maximum possible times the number can be formed as a whole
*/

/*
B. Anton and Digits
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Recently Anton found a box with digits in his room. There are k2 digits 2, k3 digits 3, k5 digits 5 and k6 digits 6.

Anton's favorite integers are 32 and 256. He decided to compose this integers from digits he has. He wants to make the sum of these integers as large as possible. Help him solve this task!

Each digit can be used no more than once, i.e. the composed integers should contain no more than k2 digits 2, k3 digits 3 and so on. Of course, unused digits are not counted in the sum.

Input
The only line of the input contains four integers k2, k3, k5 and k6 — the number of digits 2, 3, 5 and 6 respectively (0 ≤ k2, k3, k5, k6 ≤ 5·106).

Output
Print one integer — maximum possible sum of Anton's favorite integers that can be composed using digits from the box.

Examples
inputCopy
5 1 3 4
outputCopy
800
inputCopy
1 1 1 1
outputCopy
256
Note
In the first sample, there are five digits 2, one digit 3, three digits 5 and four digits 6. Anton can compose three integers 256 and one integer 32 to achieve the value 256 + 256 + 256 + 32 = 800. Note, that there is one unused integer 2 and one unused integer 6. They are not counted in the answer.

In the second sample, the optimal answer is to create on integer 256, thus the answer is 256.
*/

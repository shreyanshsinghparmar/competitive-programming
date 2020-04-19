#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int arr[n];
	int total = 0;
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
		total += arr[i];
	}
	int ans = 0;
	for(int i : arr) {
		int newsum = total - i;
		if(newsum % 2 == 0)
			++ans;
	}
	cout << ans;

	return 0;
}

/*
A. Cookies
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Olga came to visit the twins Anna and Maria and saw that they have many cookies. The cookies are distributed into bags. As there are many cookies, Olga decided that it's no big deal if she steals a bag. However, she doesn't want the sisters to quarrel because of nothing when they divide the cookies. That's why Olga wants to steal a bag with cookies so that the number of cookies in the remaining bags was even, that is, so that Anna and Maria could evenly divide it into two (even 0 remaining cookies will do, just as any other even number). How many ways there are to steal exactly one cookie bag so that the total number of cookies in the remaining bags was even?

Input
The first line contains the only integer n (1 ≤ n ≤ 100) — the number of cookie bags Anna and Maria have. The second line contains n integers a i (1 ≤ a i ≤ 100) — the number of cookies in the i-th bag.

Output
Print in the only line the only number — the sought number of ways. If there are no such ways print 0.

Examples
inputCopy
1
1
outputCopy
1
inputCopy
10
1 2 2 3 4 4 4 2 2 2
outputCopy
8
inputCopy
11
2 2 2 2 2 2 2 2 2 2 99
outputCopy
1
Note
In the first sample Olga should take the only bag so that the twins ended up with the even number of cookies.

In the second sample Olga can take any of five bags with two cookies or any of three bags with four cookies — 5 + 3 = 8 ways in total.

In the third sample, no matter which bag with two cookies Olga chooses, the twins are left with 2 * 9 + 99 = 117 cookies. Thus, Olga has only one option: to take the bag with 99 cookies.
*/

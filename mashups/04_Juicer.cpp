#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, b, d;
	cin >> n >> b >> d;
	int a[n];
	for(int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if(x > b) a[i] = -1;
		else a[i] = x;
	}
	int cnt = 0, tmp = 0;
	for(int i : a) {
		if(i != -1) {
			tmp += i;
		}
		if(tmp > d) ++cnt, tmp = 0;
	}
	cout << cnt;

	return 0;
}

/*
A. Juicer
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Kolya is going to make fresh orange juice. He has n oranges of sizes a1, a2, ..., an. Kolya will put them in the juicer in the fixed order, starting with orange of size a1, then orange of size a2 and so on. To be put in the juicer the orange must have size not exceeding b, so if Kolya sees an orange that is strictly greater he throws it away and continues with the next one.

The juicer has a special section to collect waste. It overflows if Kolya squeezes oranges of the total size strictly greater than d. When it happens Kolya empties the waste section (even if there are no more oranges) and continues to squeeze the juice. How many times will he have to empty the waste section?

Input
The first line of the input contains three integers n, b and d (1 ≤ n ≤ 100 000, 1 ≤ b ≤ d ≤ 1 000 000) — the number of oranges, the maximum size of the orange that fits in the juicer and the value d, which determines the condition when the waste section should be emptied.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1 000 000) — sizes of the oranges listed in the order Kolya is going to try to put them in the juicer.

Output
Print one integer — the number of times Kolya will have to empty the waste section.

Examples
inputCopy
2 7 10
5 6
outputCopy
1
inputCopy
1 5 10
7
outputCopy
0
inputCopy
3 10 10
5 7 7
outputCopy
1
inputCopy
1 1 1
1
outputCopy
0
Note
In the first sample, Kolya will squeeze the juice from two oranges and empty the waste section afterwards.

In the second sample, the orange won't fit in the juicer so Kolya will have no juice at all.
*/

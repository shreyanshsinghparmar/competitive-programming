#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int v[n + 1], u[n + 1];
	for(int i = 1; i <= n; ++i) {
		cin >> v[i];
		u[i] = v[i];
	}
	sort(u + 1, u + n + 1);
	for(int i = 1; i <= n; ++i) {
		v[i] += v[i - 1];
		u[i] += u[i - 1];
	}
	int m;
	cin >> m;
	while(m--) {
		int t, l, r;
		cin >> t >> l >> r;
		if(t == 1) cout << v[r] - v[l - 1] << '\n';
		else cout << u[r] - u[l - 1] << '\n';
	}

	return 0;
}

/*
Calculate the prefix sum of the costs, in both unsorted and sorted fashion.
Now, if in an array [1, 2, 3, 4, 5] one wants to get the sum from 3 to 5, we can apply:
* (1 + 2 + 3 + 4 + 5) - (1 + 2), which is the difference between the prefix sum of 5th and 2nd element
Hence, to get the sum from l to r. we need to perform prefix[r] - prefix[l - 1]
So, we do this as per the type of query with the sorted or unsorted array, as required.
Preprocessing takes O(n) time and answering a query takes O(1) time.
*/

/*
B. Kuriyama Mirai's Stones
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Kuriyama Mirai has killed many monsters and got many (namely n) stones. She numbers the stones from 1 to n. The cost of the i-th stone is v i. Kuriyama Mirai wants to know something about these stones so she will ask you two kinds of questions:

She will tell you two numbers, l and r (1 ≤ l ≤ r ≤ n), and you should tell her .
Let u i be the cost of the i-th cheapest stone (the cost that will be on the i-th place if we arrange all the stone costs in non-decreasing order). This time she will tell you two numbers, l and r (1 ≤ l ≤ r ≤ n), and you should tell her .
For every question you should give the correct answer, or Kuriyama Mirai will say "fuyukai desu" and then become unhappy.

Input
The first line contains an integer n (1 ≤ n ≤ 105). The second line contains n integers: v 1, v 2, ..., v n (1 ≤ v i ≤ 109) — costs of the stones.

The third line contains an integer m (1 ≤ m ≤ 105) — the number of Kuriyama Mirai's questions. Then follow m lines, each line contains three integers type, l and r (1 ≤ l ≤ r ≤ n; 1 ≤ type ≤ 2), describing a question. If type equal to 1, then you should output the answer for the first question, else you should output the answer for the second one.

Output
Print m lines. Each line must contain an integer — the answer to Kuriyama Mirai's question. Print the answers to the questions in the order of input.

Examples
inputCopy
6
6 4 2 7 2 7
3
2 3 6
1 3 4
1 1 6
outputCopy
24
9
28
inputCopy
4
5 5 2 3
10
1 2 4
2 1 4
1 1 1
2 1 4
2 1 2
1 1 1
1 3 3
1 1 3
1 4 4
1 2 2
outputCopy
10
15
5
15
5
5
2
12
3
5
Note
Please note that the answers to the questions may overflow 32-bit integer type.
*/

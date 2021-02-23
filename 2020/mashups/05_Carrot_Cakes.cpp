#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int time = 0;
	while(time <= d) {
		n -= k;
		time += t;
	}
	if(n > 0) cout << "YES";
	else cout << "NO";

	return 0;
}

/*
If any cakes remain after time d, a second oven will speed up the process
Otherwise only one oven can handle it
*/

/*
B. Carrot Cakes
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
In some game by Playrix it takes t minutes for an oven to bake k carrot cakes, all cakes are ready at the same moment t minutes after they started baking. Arkady needs at least n cakes to complete a task, but he currently don't have any. However, he has infinitely many ingredients and one oven. Moreover, Arkady can build one more similar oven to make the process faster, it would take d minutes to build the oven. While the new oven is being built, only old one can bake cakes, after the new oven is built, both ovens bake simultaneously. Arkady can't build more than one oven.

Determine if it is reasonable to build the second oven, i.e. will it decrease the minimum time needed to get n cakes or not. If the time needed with the second oven is the same as with one oven, then it is unreasonable.

Input
The only line contains four integers n, t, k, d (1 ≤ n, t, k, d ≤ 1 000) — the number of cakes needed, the time needed for one oven to bake k cakes, the number of cakes baked at the same time, the time needed to build the second oven.

Output
If it is reasonable to build the second oven, print "YES". Otherwise print "NO".

Examples
inputCopy
8 6 4 5
outputCopy
YES
inputCopy
8 6 4 6
outputCopy
NO
inputCopy
10 3 11 4
outputCopy
NO
inputCopy
4 2 1 4
outputCopy
YES
Note
In the first example it is possible to get 8 cakes in 12 minutes using one oven. The second oven can be built in 5 minutes, so after 6 minutes the first oven bakes 4 cakes, the second oven bakes 4 more ovens after 11 minutes. Thus, it is reasonable to build the second oven.

In the second example it doesn't matter whether we build the second oven or not, thus it takes 12 minutes to bake 8 cakes in both cases. Thus, it is unreasonable to build the second oven.

In the third example the first oven bakes 11 cakes in 3 minutes, that is more than needed 10. It is unreasonable to build the second oven, because its building takes more time that baking the needed number of cakes using the only oven.
*/

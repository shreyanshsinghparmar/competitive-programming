#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int t;
	for(cin >> t; t--; cout << '\n') {
		int n, m;
		cin >> n >> m;
		cout << (n / 3) * (m / 3);
	}

	return 0;
}

/*
Each sonar controls 3*3 neighbouring cells, so to control maximum cells
* in a W x H grid one needs (W / 3) * (H / 3) sonars
*/

/*
In July 2003, the BBC reported an extensive investigation of Loch Ness by a BBC team, using 600 separate sonar
beams, found no trace of any “sea monster” (i.e., any large
animal, known or unknown) in the loch. The BBC team concluded that Nessie does not exist. Now we want to repeat the
experiment.
Given a grid of n rows and m columns representing the
loch, 6 ≤ n, m ≤ 10000, find the minimum number s of sonar
beams you must put in the square such that we can control
every position in the grid, with the following conditions:
• one sonar occupies one position in the grid; the sonar
beam controls its own cell and the contiguous cells;
• the border cells do not need to be controlled, because
Nessy cannot hide there (she is too big).
For example,
where X represents a sonar, and the shaded cells are controlled by their sonar beams; the last figure
gives us a solution.
Input
The first line of the input contains an integer, t, indicating the number of test cases. For each test case,
there is a line with two numbers separated by blanks, 6 ≤ n, m ≤ 10000, that is, the size of the grid (n
rows and m columns).
Output
For each test case, the output should consist of one line showing the minimum number of sonars that
verifies the conditions above.
Sample Input
3
6 6
7 7
9 13
Sample Output
4
4
12
*/

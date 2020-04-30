#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	char mat[n][m];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> mat[i][j];
		}
	}
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(mat[i][j] == 'P') {
				if(j < m - 1 && mat[i][j + 1] == 'W') {
					++ans;
					mat[i][j] = '.', mat[i][j + 1] = '.';
				} if(j > 0 && mat[i][j - 1] == 'W') {
					++ans;
					mat[i][j] = '.', mat[i][j - 1] = '.';
				} else if(i < n - 1 && mat[i + 1][j] == 'W') {
					++ans;
					mat[i][j] = '.';
					mat[i + 1][j] = '.';
				} else if(i > 0 && mat[i - 1][j] == 'W') {
					++ans;
					mat[i][j] = '.';
					mat[i - 1][j] = '.';
				}
			}
		}
	}
	cout << ans;

	return 0;
}

/*
B. Little Pigs and Wolves
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Once upon a time there were several little pigs and several wolves on a two-dimensional grid of size n × m. Each cell in this grid was either empty, containing one little pig, or containing one wolf.

A little pig and a wolf are adjacent if the cells that they are located at share a side. The little pigs are afraid of wolves, so there will be at most one wolf adjacent to each little pig. But each wolf may be adjacent to any number of little pigs.

They have been living peacefully for several years. But today the wolves got hungry. One by one, each wolf will choose one of the little pigs adjacent to it (if any), and eats the poor little pig. This process is not repeated. That is, each wolf will get to eat at most one little pig. Once a little pig gets eaten, it disappears and cannot be eaten by any other wolf.

What is the maximum number of little pigs that may be eaten by the wolves?

Input
The first line contains integers n and m (1 ≤ n, m ≤ 10) which denotes the number of rows and columns in our two-dimensional grid, respectively. Then follow n lines containing m characters each — that is the grid description. "." means that this cell is empty. "P" means that this cell contains a little pig. "W" means that this cell contains a wolf.

It is guaranteed that there will be at most one wolf adjacent to any little pig.

Output
Print a single number — the maximal number of little pigs that may be eaten by the wolves.

Examples
inputCopy
2 3
PPW
W.P
outputCopy
2
inputCopy
3 3
P.W
.P.
W.P
outputCopy
0
Note
In the first example, one possible scenario in which two little pigs get eaten by the wolves is as follows.
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;
 
int32_t main() {
	fastio;

	int n, k;
	cin >> n >> k;
	int mat[n][n];
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j)
			mat[i][j] = i == j ? k : 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j)
			cout << mat[i][j] << ' ';
		cout << '\n';
	}

	return 0;
}

/*
A. Levko and Table
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Levko loves tables that consist of n rows and n columns very much. He especially loves beautiful tables. A table is beautiful to Levko if the sum of elements in each row and column of the table equals k.

Unfortunately, he doesn't know any such table. Your task is to help him to find at least one of them.

Input
The single line contains two integers, n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 1000).

Output
Print any beautiful table. Levko doesn't like too big numbers, so all elements of the table mustn't exceed 1000 in their absolute value.

If there are multiple suitable tables, you are allowed to print any of them.

Examples
inputCopy
2 4
outputCopy
1 3
3 1
inputCopy
4 7
outputCopy
2 1 0 4
4 0 2 1
1 3 3 0
0 3 2 2
Note
In the first sample the sum in the first row is 1 + 3 = 4, in the second row — 3 + 1 = 4, in the first column — 1 + 3 = 4 and in the second column — 3 + 1 = 4. There are other beautiful tables for this sample.

In the second sample the sum of elements in each row and each column equals 7. Besides, there are other tables that meet the statement requirements.
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	map<string, int> m;
	while(n--) {
		string x;
		cin >> x;
		++m[x];
	}
	int maximo = INT_MIN;
	string ans;
	for(auto i : m) {
		if(i.second > maximo) {
			maximo = i.second;
			ans = i.first;
		}
	}
	cout << ans;

	return 0;
}

/*
A. Football
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day Vasya decided to have a look at the results of Berland 1910 Football Championship’s finals. Unfortunately he didn't find the overall score of the match; however, he got hold of a profound description of the match's process. On the whole there are n lines in that description each of which described one goal. Every goal was marked with the name of the team that had scored it. Help Vasya, learn the name of the team that won the finals. It is guaranteed that the match did not end in a tie.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of lines in the description. Then follow n lines — for each goal the names of the teams that scored it. The names are non-empty lines consisting of uppercase Latin letters whose lengths do not exceed 10 symbols. It is guaranteed that the match did not end in a tie and the description contains no more than two different teams.

Output
Print the name of the winning team. We remind you that in football the team that scores more goals is considered the winner.

Examples
inputCopy
1
ABC
outputCopy
ABC
inputCopy
5
A
ABA
ABA
A
A
outputCopy
A
*/

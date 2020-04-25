#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n, r;
	cin >> n >> r;
	int c[n];
	for(int i = 0; i < n; ++i) cin >> c[i];
	int costs[n];
	int m = 0;
	for(int i = 0; i < n; ++i)
		costs[i] = c[i] + (i + 1) * ++m;

	int count = 0, cost = 0;
	sort(costs, costs + n);
	for(int i : costs) {
		if(r - i < 0) break;
		r -= i;
		cost += i;
		++count;
	}
	cout << count << ' ' << cost;

	return 0;
}

/*
Chef is going to start playing Fantasy Football League (FFL) this season. In FFL, each team consists of exactly 15 players: 2 goalkeepers, 5 defenders, 5 midfielders and 3 forwards. Chef has already bought 13 players; he is only missing one defender and one forward.

There are N available players (numbered 1 through N). For each valid i, the i-th player is either a defender or a forward and has a price Pi. The sum of prices of all players in a team must not exceed 100 dollars and the players Chef bought already cost him S dollars.

Can you help Chef determine if he can complete the team by buying one defender and one forward in such a way that he does not exceed the total price limit?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and S.
The second line contains N space-separated integers P1,P2,…,PN.
The last line contains N space-separated integers. For each valid i, the i-th of these integers is 0 if the i-th player is a defender or 1 if the i-th player is a forward.
Output
For each test case, print a single line containing the string "yes" if it is possible to build a complete team or "no" otherwise (without quotes).

Constraints
1≤T≤100
1≤N≤100
13≤S≤100
1≤Pi≤100 for each valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
4 90
3 8 6 5
0 1 1 0
4 90
5 7 6 5
0 1 1 0
Example Output
yes
no
Explanation
Example case 1: If Chef buys the 1-st and 3-rd player, the total price of his team is 90+9=99, which is perfectly fine. There is no other valid way to pick two players.

Example case 2: Chef cannot buy two players in such a way that all conditions are satisfied.
*/

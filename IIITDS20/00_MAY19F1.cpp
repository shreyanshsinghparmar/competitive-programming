#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int n, q, debug = 0;
		cin >> n >> q;
		int maxx[n];
		int curr_max = INT_MIN;
		for(int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			curr_max = max(curr_max, x);
			maxx[i] = curr_max;
		}
		if(debug) {
			for(int i : maxx)
				cout << i << ' ';
		}
		cout << '\n';
		for(int i = 0; i < q; ++i) {
			int x;
			cin >> x;
			cout << maxx[x - 1] << '\n';
		}
	}

	return 0;
}

/*
Lost Guy Radhu
Far away in Lonely lands of Sahoo village there lived mathematically advanced guy. Let's call him the lost guy because he remains lost in his Mathematical courses.

One of the games he is playing is "Dab the Tab". This game is so addictive that he isn't doing anything else and played this game N times in a single day, getting a score of Ai in the i-th game. After every game, the Maximum Score among all games played till now, is displayed.

Next day, he was bored at work, and was thinking about the gaming session the previous day. In particular, he had Q thoughts, where each thought involves wondering what Maximum Score was displayed after the i-th game. He wants you to help him resolve these thoughts. That is, he has Q questions, where each question consists of a single integer qi. For this, you should tell him what the Maximum Score was, after the qi game.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase begins with two integers, N and Q, denoting the number of games played and the number of queries.
Next Line contains N integers: A1,A2,…,AN, the scores in the N games playes.
Next Line contains Q integers, q1q2…qQ, where qi denotes the i-th query.
Output:
For each query, print the Maximum Score in a new line

Constraints
1≤T≤10
1≤N,Q≤105
0≤Ai≤MX
1≤qi≤N
Subtasks
Subtask 1 (15% points): N≤100,Q≤104 and MX=1000
Subtask 2 (20% points): N≤1000,Q≤105 and MX=109
Subtask 3 (65% points): N≤105,Q≤105 and MX=109.
Sample Input:
1        
5 3        
5 4 8 6 9        
2 3 5
    
Sample Output:
5        
8        
9    

EXPLANATION:
For first thought, maximum score is max(5,4)=5.
For second thought, maximum score is max(5,4,8)=8.
*/

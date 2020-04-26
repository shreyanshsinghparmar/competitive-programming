#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while(true) {
		c -= b;
		if(c <= 0) break;
		a -= d;
		if(a <= 0) break;
	}
	if(a > 0) cout << "Yes";
	else cout << "No";

	return 0;
}

/*
B - Battle / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
200
 points

Problem Statement
Takahashi and Aoki will have a battle using their monsters.

The health and strength of Takahashi's monster are 
A
 and 
B
, respectively, and those of Aoki's monster are 
C
 and 
D
, respectively.

The two monsters will take turns attacking, in the order Takahashi's, Aoki's, Takashi's, Aoki's, ... Here, an attack decreases the opponent's health by the value equal to the attacker's strength. The monsters keep attacking until the health of one monster becomes 
0
 or below. The person with the monster whose health becomes 
0
 or below loses, and the other person wins.

If Takahashi will win, print Yes; if he will lose, print No.

Constraints
1
≤
A
,
B
,
C
,
D
≤
100
All values in input are integers.
Input
Input is given from Standard Input in the following format:

A
 
B
 
C
 
D

Output
If Takahashi will win, print Yes; if he will lose, print No.

Sample Input 1 
Copy
10 9 10 10
Sample Output 1 
Copy
No
First, Takahashi's monster attacks Aoki's monster, whose health is now 
10
−
9
=
1
.

Next, Aoki's monster attacks Takahashi's monster, whose health is now 
10
−
10
=
0
.

Takahashi's monster is the first to have 
0
 or less health, so Takahashi loses.

Sample Input 2 
Copy
46 4 40 5
Sample Output 2 
Copy
Yes
*/

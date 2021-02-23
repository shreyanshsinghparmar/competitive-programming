#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int s, w;
	cin >> s >> w;
	if(w >= s) cout << "unsafe";
	else cout << "safe";

	return 0;
}

/*
A - Sheep and Wolves / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
100
 points

Problem Statement
There are 
S
 sheep and 
W
 wolves.

If the number of wolves is greater than or equal to that of sheep, the wolves will attack the sheep.

If the wolves will attack the sheep, print unsafe; otherwise, print safe.

Constraints
1
≤
S
≤
100
1
≤
W
≤
100
Input
Input is given from Standard Input in the following format:

S
 
W

Output
If the wolves will attack the sheep, print unsafe; otherwise, print safe.

Sample Input 1 
Copy
4 5
Sample Output 1 
Copy
unsafe
There are four sheep and five wolves. The number of wolves is not less than that of sheep, so they will attack them.

Sample Input 2 
Copy
100 2
Sample Output 2 
Copy
safe
Many a sheep drive away two wolves.

Sample Input 3 
Copy
10 10
Sample Output 3 
Copy
unsafe
*/

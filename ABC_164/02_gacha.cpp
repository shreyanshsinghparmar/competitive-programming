#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	set<string> s;
	int count = 0;
	while(n--) {
		string x;
		cin >> x;
		if(s.find(x) == s.end()) {
			s.insert(x);
			++count;
		}
	}
	cout << count;

	return 0;
}

/*
C - gacha / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
300
 points

Problem Statement
You drew lottery 
N
 times. In the 
i
-th draw, you got an item of the kind represented by a string 
S
i
.

How many kinds of items did you get?

Constraints
1
≤
N
≤
2
×
10
5
S
i
 consists of lowercase English letters and has a length between 
1
 and 
10
 (inclusive).
Input
Input is given from Standard Input in the following format:

N

S
1

:

S
N

Output
Print the number of kinds of items you got.

Sample Input 1 
Copy
3
apple
orange
apple
Sample Output 1 
Copy
2
You got two kinds of items: apple and orange.

Sample Input 2 
Copy
5
grape
grape
grape
grape
grape
Sample Output 2 
Copy
1
Sample Input 3 
Copy
4
aaaa
a
aaa
aa
Sample Output 3 
Copy
4
*/

#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	string s, t;
	cin >> s >> t;
	t.pop_back();
	if(s == t) cout << "Yes";
	else cout << "No";

	return 0;
}

/*
A - Registration / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
100
 points

Problem Statement
Takahashi wants to be a member of some web service.

He tried to register himself with the ID 
S
, which turned out to be already used by another user.

Thus, he decides to register using a string obtained by appending one character at the end of 
S
 as his ID.

He is now trying to register with the ID 
T
. Determine whether this string satisfies the property above.

Constraints
S
 and 
T
 are strings consisting of lowercase English letters.
1
≤
|
S
|
≤
10
|
T
|
=
|
S
|
+
1
Input
Input is given from Standard Input in the following format:

S

T

Output
If 
T
 satisfies the property in Problem Statement, print Yes; otherwise, print No.

Sample Input 1 
Copy
chokudai
chokudaiz
Sample Output 1 
Copy
Yes
chokudaiz can be obtained by appending z at the end of chokudai.

Sample Input 2 
Copy
snuke
snekee
Sample Output 2 
Copy
No
snekee cannot be obtained by appending one character at the end of snuke.

Sample Input 3 
Copy
a
aa
Sample Output 3 
Copy
Yes
*/

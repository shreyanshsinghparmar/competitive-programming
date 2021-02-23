#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	int freq[100001], sum = 0;
	memset(freq, 0, sizeof(freq));
	for(int i = 0; i < n; ++i) ++freq[a[i]], sum += a[i];
	int q;
	cin >> q;
	while(q--) {
		int b, c;
		cin >> b >> c;
		sum -= b * freq[b], sum += c * freq[b];
		freq[c] += freq[b], freq[b] = 0;
		cout << sum << '\n';
	}

	return 0;
}

/*
Pre-computing sum gives 1+2+3+4
* Now, to remove 1 and add 2 -> (1+2+3+4) - (1) + (2)
* Similarly to remove 3 and add 2 now, current sum - 3 + 2
* And so on
But for this problem, there are multiple instances of same number
* So, it makes sense to pre-compute frequencies
* For each query, we subtract b times the frequency of b, and add c times the frequency of b
* Now, the frequency of c increases by the frequency of b and frequency of b is zero
*/

/*
D - Replacing / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
400
 points

Problem Statement
You have a sequence 
A
 composed of 
N
 positive integers: 
A
1
,
A
2
,
⋯
,
A
N
.

You will now successively do the following 
Q
 operations:

In the 
i
-th operation, you replace every element whose value is 
B
i
 with 
C
i
.
For each 
i
 
(
1
≤
i
≤
Q
)
, find 
S
i
: the sum of all elements in 
A
 just after the 
i
-th operation.

Constraints
All values in input are integers.
1
≤
N
,
Q
,
A
i
,
B
i
,
C
i
≤
10
5
B
i
≠
C
i
Input
Input is given from Standard Input in the following format:

N

A
1
 
A
2
 
⋯
 
A
N

Q

B
1
 
C
1

B
2
 
C
2

⋮

B
Q
 
C
Q

Output
Print 
Q
 integers 
S
i
 to Standard Output in the following format:

S
1

S
2

⋮

S
Q

Note that 
S
i
 may not fit into a 
32
-bit integer.

Sample Input 1 
Copy
4
1 2 3 4
3
1 2
3 4
2 4
Sample Output 1 
Copy
11
12
16
Initially, the sequence 
A
 is 
1
,
2
,
3
,
4
.

After each operation, it becomes the following:

2
,
2
,
3
,
4
2
,
2
,
4
,
4
4
,
4
,
4
,
4
Sample Input 2 
Copy
4
1 1 1 1
3
1 2
2 1
3 5
Sample Output 2 
Copy
8
4
4
Note that the sequence 
A
 may not contain an element whose value is 
B
i
.

Sample Input 3 
Copy
2
1 2
3
1 100
2 100
100 1000
Sample Output 3 
Copy
102
200
2000
*/

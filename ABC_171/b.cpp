#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);
	int ans = 0;
	for(int i = 0; i < k; ++i) ans += a[i];
	cout << ans;

	return 0;
}

/*
B - Mix Juice / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
200
 points

Problem Statement
A shop sells 
N
 kinds of fruits, Fruit 
1
,
…
,
N
, at prices of 
p
1
,
…
,
p
N
 yen per item, respectively. (Yen is the currency of Japan.)

Here, we will choose 
K
 kinds of fruits and buy one of each chosen kind. Find the minimum possible total price of those fruits.

Constraints
1
≤
K
≤
N
≤
1000
1
≤
p
i
≤
1000
All values in input are integers.
Input
Input is given from Standard Input in the following format:

N
 
K

p
1
 
p
2
 
…
 
p
N

Output
Print an integer representing the minimum possible total price of fruits.

Sample Input 1 
Copy
5 3
50 100 80 120 80
Sample Output 1 
Copy
210
This shop sells Fruit 
1
, 
2
, 
3
, 
4
, and 
5
 for 
50
 yen, 
100
 yen, 
80
 yen, 
120
 yen, and 
80
 yen, respectively.

The minimum total price for three kinds of fruits is 
50
+
80
+
80
=
210
 yen when choosing Fruit 
1
, 
3
, and 
5
.

Sample Input 2 
Copy
1 1
1000
Sample Output 2 
Copy
1000
*/

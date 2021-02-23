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
	int s = 0;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		s ^= a[i];
	}
	for(int i : a) cout << (s ^ i) << ' ';

	return 0;
}

/*
By the definition of XOR in the problem statement, we can see that calculation of XOR of 3 or
more integers can be done in an arbitrary order; for example, for any three integers a, b, c, it holds that
a ⊕ b ⊕ c = b ⊕ c ⊕ a = (a ⊕ b) ⊕ c = c ⊕ (a ⊕ b). We can also see that, a ⊕ a = 0 for all integer a.
Together, we can claim that a ⊕ b ⊕ a = (a ⊕ a) ⊕ b = 0 ⊕ b = b.
Now let’s move on to the original problem. Let bi b the integer of i-th cat. Here, ai = b1 ⊕ . . . ⊕
bi−1 ⊕ bi+1 ⊕ . . . ⊕ bN. It’s a bit kind of sudden, but we will calculate the XOR of the given N values
a1, . . . , aN. This value can be transformed as followed:
a1 ⊕ a2 ⊕ . . . ⊕ aN = (b2 ⊕ . . . ⊕ bN) ⊕ (b1 ⊕ b3 ⊕ . . . ⊕ bN) ⊕ . . . ⊕ (b1 ⊕ . . . ⊕ bN−1)
= (b1 ⊕ . . . ⊕ b1 | {z }
N−1elements
) ⊕ (b2 ⊕ . . . ⊕ b2 | {z }
N−1elements
) ⊕ . . . ⊕ (bN ⊕ . . . ⊕ bN | {z }
N−1elements
)
= b1 ⊕ b2 ⊕ . . . ⊕ bN (∵ Nis even)
Therefore, we could see that a1 ⊕ . . . ⊕ aN = b1 ⊕ . . . ⊕ bN. Moreover, let this value be B, then for all
i the following equations hold:
S ⊕ ai = (b1 ⊕ . . . ⊕ bN) ⊕ (b1 ⊕ . . . ⊕ bi−1 ⊕ bi+1 ⊕ . . . ⊕ bN)
= (b1 ⊕ b1) ⊕ . . . ⊕ (bi−1 ⊕ bi−1) ⊕ bi ⊕ (bi+1 ⊕ bi+1) ⊕ . . . ⊕ (bN ⊕ bN) = bi
Therefore, for each i it appears that bi = S ⊕ ai
, so the problem has been solved. There was a
constraints in the problem statement that “there exists a combination of integers on the scarfs that
is consistent with the given information,” and the “Output” section states that “if there are multiple
possible solutions, you may print any of them;” however, by this solution, for any combination of N
integers a1, . . . , aN, there always exists a unique combination of integers on the scarfs b1, . . . , bN that
satisfies it.
*/

/*
E - Red Scarf / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
500
 points

Problem Statement
There are 
N
 Snuke Cats numbered 
1
,
2
,
…
,
N
, where 
N
 is even.

Each Snuke Cat wears a red scarf, on which his favorite non-negative integer is written.

Recently, they learned the operation called xor (exclusive OR).

What is xor?
They wanted to use this operation quickly, so each of them calculated the xor of the integers written on their scarfs except his scarf.

We know that the xor calculated by Snuke Cat 
i
, that is, the xor of the integers written on the scarfs except the scarf of Snuke Cat 
i
 is 
a
i
. Using this information, restore the integer written on the scarf of each Snuke Cat.

Constraints
All values in input are integers.
2
≤
N
≤
200000
N
 is even.
0
≤
a
i
≤
10
9
There exists a combination of integers on the scarfs that is consistent with the given information.
Input
Input is given from Standard Input in the following format:

N

a
1
 
a
2
 
…
 
a
N

Output
Print a line containing 
N
 integers separated with space.

The 
i
-th of the integers from the left should represent the integer written on the scarf of Snuke Cat 
i
.

If there are multiple possible solutions, you may print any of them.

Sample Input 1 
Copy
4
20 11 9 24
Sample Output 1 
Copy
26 5 7 22
5
 
xor
 
7
 
xor
 
22
=
20
26
 
xor
 
7
 
xor
 
22
=
11
26
 
xor
 
5
 
xor
 
22
=
9
26
 
xor
 
5
 
xor
 
7
=
24
Thus, this output is consistent with the given information.
*/

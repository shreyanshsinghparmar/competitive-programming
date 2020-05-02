#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if(a + b + c == 180) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}

/*
Valid Triangles
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three angles A, B and C of triangle separated by space.

Output
Display 'YES' or 'NO' if the triangle is Valid or not respectively.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 180
Example
Input

3 
40 40 100
45 45 90
180 1 1
Output

YES
YES
NO
*/

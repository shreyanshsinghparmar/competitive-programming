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
		int x, y;
		cin >> x >> y;
		cout << max(x, y) << ' ' << x + y << '\n';
	}

	return 0;
}

/*
Chef and Remissness
Chef is now a corporate person. He has to attend office regularly. But chef does not want to go to office, rather he wants to stay home and discover different recipes and cook them.

In the office where chef works, has two guards who count how many times a person enters into the office building. Though the duty of a guard is 24 hour in a day, but sometimes they fall asleep during their duty and could not track the entry of a person in the office building. But one better thing is that they never fall asleep at the same time. At least one of them remains awake and counts who enters into the office.

Now boss of Chef wants to calculate how many times Chef has entered into the building. He asked to the guard and they give him two integers A and B, count of first guard and second guard respectively.

Help the boss to count the minimum and maximum number of times Chef could have entered into the office building.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of the T test cases follows.

Each test case consists of a line containing two space separated integers A and B.

Output
For each test case, output a single line containing two space separated integers, the minimum and maximum number of times Chef could have entered into the office building.

Constraints
1 ≤ T ≤ 100
0 ≤ A, B ≤ 1000000
Example
Input:
1
19 17

Output:
19 36
*/

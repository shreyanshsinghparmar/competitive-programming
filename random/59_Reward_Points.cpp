#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n = 3, ans = 0;
	while(n--) {
		int x;
		cin >> x;
		int curr = x * 10;
		if(curr > 100) ans += 100;
		else ans += curr;
	}
	cout << ans;

	return 0;
}

/*
Reward Points
The Bank of HackerLand gives its cardholders reward points according to the following rules:

Each time a cardholder's card is swiped, they receive  reward points.
Each cardholder can earn a maximum of  reward points per month.
Given the number of times a cardholder's card was swiped during each of the last three months, find the total number of reward points earned during the three month period.

Input Format

A single line of three space-separated integers describing the respective values of , , and  (the number of swipes per month for the last three months).

Constraints

Output Format

Print an integer denoting the total number of reward points the cardholder earned over the given three month period.

Sample Input 0

10 20 5
Sample Output 0

250
Explanation 0

We perform the following calculations:

, so the card was swiped  times for a total of  points.
, so the card was swiped  times for a preliminary total of  points. Because the maximum number of possible points for a given month is , we reduce this number to .
, so the card was swiped  times for a total of  points.
We then return the total number of points earned over , , and , which is .
*/

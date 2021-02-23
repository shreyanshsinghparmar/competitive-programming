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
		int a, b, ans;
		cin >> a >> b;
		int c = a + b;
		bool flag = true;
		for(int i = c + 1; flag; ++i) {
			int count = 0;
			for(int j = 2; j * j <= i; ++j) {
				if(i % j == 0) ++count;
			}
			if(!count) {
				ans = i;
				flag = false;
			}
		}
		cout << ans - c << '\n';
	}

	return 0;
}

/*
Farmer Feb has three fields with potatoes planted in them. He harvested x potatoes from the first field, y potatoes from the second field and is yet to harvest potatoes from the third field. Feb is very superstitious and believes that if the sum of potatoes he harvests from the three fields is a prime number (http://en.wikipedia.org/wiki/Prime_number), he'll make a huge profit. Please help him by calculating for him the minimum number of potatoes that if harvested from the third field will make the sum of potatoes prime. At least one potato should be harvested from the third field.

Input
The first line of the input contains an integer T denoting the number of test cases. Each of the next T lines contain 2 integers separated by single space: x and y.

 

Output
For each test case, output a single line containing the answer.

 

Constraints
1 ≤ T ≤ 1000
1 ≤ x ≤ 1000
1 ≤ y ≤ 1000
 

Example
Input:
2
1 3
4 3

Output:
1
4
Explanation
In example case 1: the farmer harvested a potato from the first field and 3 potatoes from the second field. The sum is 4. If he is able to harvest a potato from the third field, that will make the sum 5, which is prime. Hence the answer is 1(he needs one more potato to make the sum of harvested potatoes prime.)
*/

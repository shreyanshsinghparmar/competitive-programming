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
		int n, m;
		cin >> n >> m;
		int sum = 0, x;
		while(n--) cin >> x, sum += x;
		cout << min(m, sum) << '\n';
	}

	return 0;
}

/*
n is constant for a particular case, so
* the elements need to be altered such that the sum is still the same
* the only way to increase a single element with those constraints is to decrease other scores
* but the increased score can't be greater than the sum of all elements [sum, 0, 0, 0...]
* it can also not be greater than m, because that is the highest score obtainable
Now 3 cases arise:
* m > sum -- [sum, 0, 0, 0...]
* m < sum -- [m, ...]
* m = sum -- [sum, 0, 0, 0...]
So the answer is min(m, sum)
*/

/*
A. Grade Allocation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
n students are taking an exam. The highest possible score at this exam is m. Let ai be the score of the i-th student. You have access to the school database which stores the results of all students.

You can change each student's score as long as the following conditions are satisfied:

All scores are integers
0≤ai≤m
The average score of the class doesn't change.
You are student 1 and you would like to maximize your own score.

Find the highest possible score you can assign to yourself such that all conditions are satisfied.

Input
Each test contains multiple test cases.

The first line contains the number of test cases t (1≤t≤200). The description of the test cases follows.

The first line of each test case contains two integers n and m (1≤n≤103, 1≤m≤105)  — the number of students and the highest possible score respectively.

The second line of each testcase contains n integers a1,a2,…,an (0≤ai≤m)  — scores of the students.

Output
For each testcase, output one integer  — the highest possible score you can assign to yourself such that both conditions are satisfied._

Example
inputCopy
2
4 10
1 2 3 4
4 5
1 2 3 4
outputCopy
10
5
Note
In the first case, a=[1,2,3,4], with average of 2.5. You can change array a to [10,0,0,0]. Average remains 2.5, and all conditions are satisfied.

In the second case, 0≤ai≤5. You can change a to [5,1,1,3]. You cannot increase a1 further as it will violate condition 0≤ai≤m.
*/

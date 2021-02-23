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
		int n;
		cin >> n;
		int a[n], b[n];
		map<int,int> m;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			++m[a[i]];
		}
		b[0] = n - m[a[0]];
		for(int i = 1; i < n; ++i) {
			if(a[i] == a[i - 1]) b[i] = b[i - 1];
			else b[i] = b[i - 1] - m[a[i]];
		}
		for(int i : b) cout << i << ' ';
		cout << '\n';
	}

	return 0;
}

/*
This is quiet a simple problem. Make a frequency map(STL) in which key of map represents the element of array and and value represents its frequency in the array(number of times it is occuring in list A). Let B is the new list to be displayed.

Now traverse the list A.

Case 1: i=0(the first element of array) then B[i]=n-(frequency of A[i]).

Case 2:1<=i<n if(A[i]=A[i-1]) then B[i]=B[i-1] (if two elements are equal then the number of elements strictly greater than them will also be equal ) otherwise B[i]=B[i-1]-(frequency of A[i]).

Time Complexity:O(T * N * log N)
*/

/*
You are given a sorted list A of size N.You have to make a new list B such that B[i] is equal to the number of elements strictly greater than A[i] in the list A.

Print the new list.

Input
The first line consists of T, denoting the number of test cases.

First line of each test case consists of one integer denoting N, where N is the size of the list given to you.

Second line of each test case contains the list given to you containing N elements.

Output
For each test case print the list in a single line and the elements of the list should be separated by space.

Print the answer to each test case in a new line.

Constraints
1≤T≤100 , where T is the number of test cases.
1≤N≤100, where N is the number of elements in the list.
1≤A[i]≤1000000 ,where A[i] is the ith element in the list given to you.
Subtasks
15 points: All the elements in the list given to you are distinct.
35 points: Original constraints: Elements can be repeated in the list.
Sample Input
2
4
1 2 4 4
5
1 2 2 2 2

Sample Output
3 2 0 0
4 0 0 0 0

Explanation
The explanation for test case 1 of sample input :

The first element in the new list is 3 since the first element in the previous list was 1, and there are three elements which are strictly greater than 1, that is 2, 4 and 4.

The second element in the new list is 2 since the second element in the previous list was 2, and there are two elements which are strictly greater than 2, that is 4 and 4.

The third and fourth element in the new list is 0 since third and fourth element in the previous list was 4 and there are no elements which are strictly greater than them.
*/

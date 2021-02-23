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
		int n, k;
		cin >> n >> k;
		int a[n], b[n];
		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) b[(i + k) % n] = a[i];
		for(int i = 0; i < n; ++i) cout << b[i] << ' ';
		cout << '\n';
	}

	return 0;
}

/*
Let's begin with an example.
A = [1, 2, 3, 4, 5] and K = 6, then if we rotate the array by K times, the resultant array would look like: [5, 1, 2, 3, 4]. So, we can see that even if the rotation was of 6 steps, we are getting the result equal to one step rotation.
That means, if K > N, we can modify K to K % N.
Let us denote B as the rotated array.Then we can write :
B[(i + K) % N] = A[i]
This is because the ith element of A becomes (i + K)th element of B. We are using %N to ensure that it never overflows.
Alternatively, we can see that element at A[i + (N - K) % N] becomes B[i].
*/

/*
Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.
Output:
Print the required array.

SAMPLE INPUT 
1
5 2
1 2 3 4 5
SAMPLE OUTPUT 
4 5 1 2 3
*/

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
	int even = 0, odd = 0;
	for(int i : a) {
		if(i % 2) ++odd;
		else ++even;
	}
	cout << even * odd;

	return 0;
}

/*
To achieve a odd sum, you need to add an even number with an odd one. This is the only way to achieve a odd sum. (even + even = even, odd + odd = even)

In this way, we can chose a number AA which is even and a number BB which is odd, and the result will be odd. The number of ways to do this, is equal to \text{number of even numbers} \times \text{number of odd numbers}number of even numbers×number of odd numbers
*/

/*
Odd Sum
Time limit: 1000 ms
Memory limit: 256 MB

You are given an array AA of NN integers. Count the number of ways you can choose a pair (i, j)(i,j), 1 \leq i <j \leq N1≤i<j≤N, i \neq ji≠j, such that A_i + A_jA
​i
​​ +A
​j
​​  is odd.

Standard input
The first line contains a single integer NN.

The second line contains NN integers representing the elements of AA.

Standard output
Print the answer on the first line.

Constraints and notes
1 \leq N \leq 1001≤N≤100
1 \leq A_i \leq 1001≤A
​i
​​ ≤100
Input	Output
4
1 2 3 4
4
4
1 1 3 3
0
5
1 1 1 2 2
6
*/

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
	int count = 0;
	int start = 0, end = 1;
	while(start <= end) {
		if(abs(a[start] - a[end]) >= k) {
			count += n - end;
			++start;
		} else {
			if(end < n - 1) ++end;
			else ++start;
		}
	}
	cout << count;

	return 0;
}

/*
Sort the sequence to get the numbers in ascending order.
* This is a binary search problem.
* Now, compare two elements. first and second.
* If the difference between them is >= k, the difference between all the numbers and the first number >= k, because all numbers further are >= second number.
* Update pointers: increment second pointer, check for overflow. If there's an overflow, increment first pointer and not second.
* This way to update pointers checks for every pair and updates the count as needed.
*/

/*
We say that two integers x and y have a variation of at least K, if |x − y| ≥ K (the absolute value of their difference is at least K). Given a sequence of N integers a1,a2,...,aN and K, the total variation count is the number of pairs of elements in the sequence with variation at least K, i.e. it is the size of the set of pairs


{(i,j)|1≤i<j≤N and|ai−aj|≥K}


For example if K = 1 and the sequence is 3,2,4 the answer is 3. If K = 1 and the sequence is 3, 1, 3 then the answer is 2.


Your task is to write a program that takes a sequence and the value K as input and computes the total variation count.


Input format
The first line contains two positive integers N and K, separated by a space.


This is followed by a line containing N integers separated by space giving the values of the sequence.


Output format
A single integer in a single line giving the total variation count.


Test data
You may assume that all integers in the input are in the range 0 to 10^8 inclusive.


Subtask 1 (40 marks) : 1 ≤ N ≤ 4000, 1 ≤ K ≤ 10^8

Subtask 2 (60 marks) : 1 ≤ N ≤ 65000, 1 ≤ K ≤ 10^8


Sample Input
3 1 
3 1 3

Sample Output
2
*/

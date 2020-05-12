#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n;
	cin >> n;
	int count = 0;
	while(n--) {
		int x;
		cin >> x;
		if(x < 0) ++count;
	}
	cout << count;

	return 0;
}

/*
Cold-puter Science
We’re not going to sugar-coat it: Chicago’s winters can be rough. The temperatures sometimes dip to uncomfortable levels and, after last year’s “polar vortex”, the University of Chicago Weather Service wants to find out exactly how bad the winter was. More specifically, they are interested in knowing the total number of days in which the temperature was below zero degrees Celsius.

Input
The input is composed of two lines. The first line contains a single positive integer n (1≤n≤100) that specifies the number of temperatures collected by the University of Chicago Weather Service. The second line contains n temperatures, each separated by a single space. Each temperature is represented by an integer t (−1000000≤t≤1000000)

Output
You must print a single integer: the number of temperatures strictly less than zero.

Sample Input 1	Sample Output 1
3
5 -10 15
1
Sample Input 2	Sample Output 2
5
-14 -5 -39 -5 -7
5
*/

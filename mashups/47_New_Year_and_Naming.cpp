#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int n, m;
	cin >> n >> m;
	string s[n], t[m];
	for(string &i : s) cin >> i;
	for(string &i : t) cin >> i;
	int q;
	cin >> q;
	while(q--) {
		int x;
		cin >> x;
		cout << s[(x - 1) % n] << t[(x - 1) % m] << '\n';
	}

	return 0;
}

/*
Use the given number as index to get the strings and concatenate
* Use modulus to get the index back in range if it exceeds
*/

/*
A. New Year and Naming
time limit per test1 second
memory limit per test1024 megabytes
inputstandard input
outputstandard output
Happy new year! The year 2020 is also known as Year Gyeongja (경자년, gyeongja-nyeon) in Korea. Where did the name come from? Let's briefly look at the Gapja system, which is traditionally used in Korea to name the years.

There are two sequences of n strings s1,s2,s3,…,sn and m strings t1,t2,t3,…,tm. These strings contain only lowercase letters. There might be duplicates among these strings.

Let's call a concatenation of strings x and y as the string that is obtained by writing down strings x and y one right after another without changing the order. For example, the concatenation of the strings "code" and "forces" is the string "codeforces".

The year 1 has a name which is the concatenation of the two strings s1 and t1. When the year increases by one, we concatenate the next two strings in order from each of the respective sequences. If the string that is currently being used is at the end of its sequence, we go back to the first string in that sequence.

For example, if n=3,m=4,s={"a", "b", "c"}, t= {"d", "e", "f", "g"}, the following table denotes the resulting year names. Note that the names of the years may repeat.


You are given two sequences of strings of size n and m and also q queries. For each query, you will be given the current year. Could you find the name corresponding to the given year, according to the Gapja system?

Input
The first line contains two integers n,m (1≤n,m≤20).

The next line contains n strings s1,s2,…,sn. Each string contains only lowercase letters, and they are separated by spaces. The length of each string is at least 1 and at most 10.

The next line contains m strings t1,t2,…,tm. Each string contains only lowercase letters, and they are separated by spaces. The length of each string is at least 1 and at most 10.

Among the given n+m strings may be duplicates (that is, they are not necessarily all different).

The next line contains a single integer q (1≤q≤2020).

In the next q lines, an integer y (1≤y≤109) is given, denoting the year we want to know the name for.

Output
Print q lines. For each line, print the name of the year as per the rule described above.

Example
inputCopy
10 12
sin im gye gap eul byeong jeong mu gi gyeong
yu sul hae ja chuk in myo jin sa o mi sin
14
1
2
3
4
10
11
12
13
73
2016
2017
2018
2019
2020
outputCopy
sinyu
imsul
gyehae
gapja
gyeongo
sinmi
imsin
gyeyu
gyeyu
byeongsin
jeongyu
musul
gihae
gyeongja
Note
The first example denotes the actual names used in the Gapja system. These strings usually are either a number or the name of some animal.
*/

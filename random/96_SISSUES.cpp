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
		bool ok = true;
		int curr = 0;
		while(n--) {
			char c;
			cin >> c;
			if(c == '+') ++curr;
			else --curr;
			if(curr < 0) ok = false;
		}
		if(ok) cout << "MAYBE YOU ARE SAFE\n";
		else cout << "FIND A NEW JOB\n";
	}

	return 0;
}

/*
Aman has been working as the security guard at Basu Company from the last 10 years. He only has one task at hand, he has to observe how many people went in the office and how many left. So he writes down a '+' when ever a person enters the office and '-' whenever a person exits the office. Initially there is no one in the office. But as usual he dosed off while at duty and maybe missed some going in or out. Since he has been already warned multiple times, if he screws up at work he will get fired!

So after the day is over, before submitting his report to the head security he asks his friend Amanda to check that if his observations he made is valid at all!

The Office will be open 24hrs a day and there will be zero or more people in it.

Now since Amanda is very busy she asks you check if the observations Aman made is possible or not.

If such an observation is possible then you print "MAYBE YOU ARE SAFE" otherwise you print "FIND A NEW JOB".

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of two lines of input, First line contains the integer N, Number of observations made on that day, Next line contains a string S made of '+' and '-', the observations made by Aman on that day (length of the string is N)
Output:
For each testcase, output in a new line "FIND A NEW JOB" If the given string is invalid otherwise output "MAYBE YOU ARE SAFE".

Constraints
1≤T≤1000
1≤N≤1000
Subtasks
30 points : 1≤T,N≤100
70 points : Original Constraints
Sample Input:
2
8
+++---++
13
+++---++---++

Sample Output:
MAYBE YOU ARE SAFE
FIND A NEW JOB
*/

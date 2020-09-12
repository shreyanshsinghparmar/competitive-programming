#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

const unsigned int M = 1e9 + 7;

int32_t main() {
	fastio;

	int s, v1, v2, t1, t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	int a = t1 * 2 + s * v1, b = t2 * 2 + s * v2;
	if(a < b) cout << "First";
	else if(a > b) cout << "Second";
	else cout << "Friendship";

	return 0;
}

/*
Time required for a person to type s characters is:
* s * (time required to type one character)
There is also a ping for every person, which appears twice, causing the person's text to take an additional time of 2 * (ping)
* So for each person the total time taken for the text to arrive, be typed and sent back to the server is:
* 2 * (ping) + s * (time required to type one character)
We need to print First, Second or Friendship based on the difference between the total time taken for the first and second person
*/

/*
A. Key races
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Two boys decided to compete in text typing on the site "Key races". During the competition, they have to type a text consisting of s characters. The first participant types one character in v1 milliseconds and has ping t1 milliseconds. The second participant types one character in v2 milliseconds and has ping t2 milliseconds.

If connection ping (delay) is t milliseconds, the competition passes for a participant as follows:

Exactly after t milliseconds after the start of the competition the participant receives the text to be entered.
Right after that he starts to type it.
Exactly t milliseconds after he ends typing all the text, the site receives information about it.
The winner is the participant whose information on the success comes earlier. If the information comes from both participants at the same time, it is considered that there is a draw.

Given the length of the text and the information about participants, determine the result of the game.

Input
The first line contains five integers s, v1, v2, t1, t2 (1 ≤ s, v1, v2, t1, t2 ≤ 1000) — the number of characters in the text, the time of typing one character for the first participant, the time of typing one character for the the second participant, the ping of the first participant and the ping of the second participant.

Output
If the first participant wins, print "First". If the second participant wins, print "Second". In case of a draw print "Friendship".

Examples
inputCopy
5 1 2 1 2
outputCopy
First
inputCopy
3 3 1 1 1
outputCopy
Second
inputCopy
4 5 3 1 5
outputCopy
Friendship
Note
In the first example, information on the success of the first participant comes in 7 milliseconds, of the second participant — in 14 milliseconds. So, the first wins.

In the second example, information on the success of the first participant comes in 11 milliseconds, of the second participant — in 5 milliseconds. So, the second wins.

In the third example, information on the success of the first participant comes in 22 milliseconds, of the second participant — in 22 milliseconds. So, it is be a draw.
*/

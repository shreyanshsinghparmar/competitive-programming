#include <bits/stdc++.h>

#define int long long
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const unsigned int mod = 1e9 + 7;

using namespace std;

int32_t main() {
	fastio;

	int t;
	for(cin >> t; t--; cout << '\n') {
		int n, z, x;
		cin >> n >> z;
		priority_queue<int> pq;
		while(n--) {
			cin >> x;
			pq.push(x);
		}
		int hits = 0;
		while(!pq.empty() && z > 0) {
			x = pq.top();
			pq.pop();
			if(x == 0) continue;
			z -= x;
			++hits;
			pq.push(x / 2);
		}
		if(z > 0)
			cout << "Evacuate";
		else
			cout << hits;
	}

	return 0;
}

/*
Save Konoha
Pain is the leader of a secret organization whose goal is to destroy the leaf village(Konoha). After successive failures, the leader has himself appeared for the job. Naruto is the head of the village but he is not in a condition to fight so the future of the village depends on the soldiers who have sworn to obey Naruto till death.

Naruto is a strong leader who loves his villagers more than anything but tactics is not his strong area. He is confused whether they should confront Pain or evacuate the villagers including the soldiers (he loves his villagers more than the village). Since you are his advisor and most trusted friend, Naruto wants you to take the decision.

Pain has a strength of Z and is confident that he will succeed. Naruto has N soldiers under his command numbered 1 through N. Power of i-th soldier is denoted by Ai. When a soldier attacks pain, his strength gets reduced by the corresponding power of the soldier. However, every action has a reaction so the power of the soldier also gets halved i.e. Ai changes to [Ai/2]. Each soldier may attack any number of times (including 0). Pain is defeated if his strength is reduced to 0 or less.

Find the minimum number of times the soldiers need to attack so that the village is saved.

Input:
First line will contain T, number of test cases. Then the test cases follow.
The first line of each test case contains two space-separated integers N and Z.
The second line contains N space-separated integers A1,A2,…,AN the attacking power of the soldiers.
Output:
For each test case, print a single line. If Pain cannot be defeated, this line should contain the string "Evacuate" (without quotes). Otherwise, it should contain the minimum number of times the soldiers need to attack.

Constraints
1≤T≤10
1≤N≤105
1≤Z≤108
1≤Ai≤104
Sample Input:
1
5 25
7 13 8 17 3

Sample Output:
2
EXPLANATION:
Soldier with power 17 hits Pain, The new powers of soldiers become [7,13,8,8,3] and the strength of pain is reduced to 8, after that any soldier with a power greater than equal to 8 can hit Pain and thus defeat him, hence answer is 2.
*/

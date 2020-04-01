#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	int answer[n];
	for(int i = 0; i < n; ++i) {
		if(i)
			answer[arr[i]-1] = i + 1;
		else
			answer[arr[i]-1] = 1;
	}
	for(int i = 0; i < n; ++i) {
		cout << answer[i] << " ";
	}
	cout << "\n";
}

#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   map<int,int> seen;
	for(int i : arr) {
		if(seen.find(s - i) != seen.end()) {
			for(int j = 0; j < seen[s - i]; ++j)
				ans.push_back({min(i, s - i), max(i, s - i)});
		}
		++seen[i];
	}
	sort(ans.begin(), ans.end());
	return ans;
}

/*
Hash map stores the frequency of each encountered element
For each element, check if (s - i) has been encountered
Since i + (s - i) = s, it means that a pair has been found which sums up to s
So push the pair inside the answer vector in sorted order
It has to be pushed however many times (s - i) has been encountered
Because there have to be as many pairs as possible
So if there are 3 twos for example with a target sum of 4, three pairs make it into the answer
Lastly, sort the answer vector because answer must be sorted
*/

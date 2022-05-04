#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int candidate = arr[0], votes = 1;
	for(int i = 1; i < n; ++i) {
		if(arr[i] == candidate) ++votes;
		else --votes;
		if(votes == 0) {
			candidate = arr[i];
			votes = 1;
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(arr[i] == candidate) ++cnt;
	}
	return (cnt > n/2 ? candidate : -1);
}

/*
If there exists a majority element, it occurs at least (N/2)+1 times
So there are at least (N/2) elements that are not majority element

So if we design an algorithm such that each same element adds a vote and each other element cuts a vote
Regardless of the order of the elements, the majority element will have (N/2)+1-(N/2) = 1 vote

After getting a possible candidate for majority element, we will check if it has at least (N/2)+1 elements
Because it is not guaranteed that there will be a majority element, and a candidate with votes might not have at least (N/2)+1 occurrences
*/

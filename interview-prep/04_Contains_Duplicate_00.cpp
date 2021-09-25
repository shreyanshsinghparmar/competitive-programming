class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] == nums[i - 1]) return true;
        }
        return false;
    }
};

/*
Time: O(n log n), Space: O(1)
* Sort array, look for consecutive equal elements
* Duplicate elements will get placed consecutively after sorting
*/

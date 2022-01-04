class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums)
            s.insert(i);
        if(s.size() == nums.size()) return false;
        else return true;
    }
};

/*
Time: O(n), Space: O(n)
* Add each element to set
* If duplicates exist, size of set will be greater than size of array
* Unordered set lookup time is O(1), so it's better than using set
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i : nums)
            s.insert(i);
        if(s.size() == nums.size()) return false;
        else return true;
    }
};

/*
Time: O(n), Space: O(n)
* Add each element to set
* Since set only adds an element once, if duplicates exist, it will be smaller than the array
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> freq;
        for(int i : nums) {
            ++freq[i];
        }
        bool ok = false;
        for(auto i : freq) {
            if(i.second > 1) ok = true;
        }
        return ok;
    }
};

/*
Time: O(n), Space: O(n)
* Use hash map to store frequency of each element
* If any element occur more than once return true, else return false
*/

/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

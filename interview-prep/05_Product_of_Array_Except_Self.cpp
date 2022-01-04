class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        for(int i : nums) if(i) prod *= i;
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i]) ans.push_back(prod / nums[i]);
            else ans.push_back(prod);
        }
        return ans;
    }
};

/*
 * Wrong answer, but logic worth noting
 * Multiply all numbers and divide by the number the exclude
 * (a*b*c*d)/d = (a*b*c) = product of array except d
*/

/*
Product of Array Except Self
Medium

10465

664

Add to List

Share
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
*/

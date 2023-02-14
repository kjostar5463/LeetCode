/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();
        int cnt = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[cnt] != nums[i])
            {
                cnt++;
                nums[cnt] = nums[i];
            }
                
            
        }
        return cnt + 1;
    }
};
// @lc code=end


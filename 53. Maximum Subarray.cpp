class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0],cursum=0;
        for(int i=0;i<nums.size();i++) {
            cursum=max(cursum,0);
            cursum+=nums[i];
            maxsum=max(cursum,maxsum);
        }
        return maxsum;
    }
};

Question:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Solution:

Using Kadanes Algorithm

1. Whenever you find negative value, make it 0 to skip

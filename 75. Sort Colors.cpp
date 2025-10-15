class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]>nums[j]) {
                    swap(nums[i],nums[j]);
                }        
            }
        }
    }   
};

Qusstion:

Inplace sorting
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Soultion:

1. Simple O(n^2) sort algo

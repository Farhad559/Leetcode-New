class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]!=0) v.push_back(nums[i]);
        }
        while(v.size()!=nums.size()) {
            v.push_back(0);
        }
        for(int i=0;i<nums.size();i++) {
            nums[i]=v[i];
        }
    }
};

Question:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Solution:

1. make a new vector store all that are not 0
2. then till v.size() != nums.size(), push 0
3. replace nums elements with vectors elements

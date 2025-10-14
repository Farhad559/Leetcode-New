class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>v;
       for (int i=0;i<nums.size();i++) {
        if(nums[i]!=val) v.push_back(nums[i]);
       } 
       int ans = v.size();
       for (int i=0;i<nums.size();i++) {
        if(nums[i]==val) v.push_back(nums[i]);
       }
       for (int i=0;i<nums.size();i++) {
        nums[i]=v[i];
       }
       return ans; 
    }
};

Question:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Val chara bakigula shamne ashbe
Val er gula pichone add hobe

Solution:

1. extra vector nisi
2. first e jegula val er equal na shegula vector e raksi
3. val chara koita ase oita ber korsi
4. erpor abar val er equal gula push korsi vector e
5. erpor num er value gula vector er shate change kore disi

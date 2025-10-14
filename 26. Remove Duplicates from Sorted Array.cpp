class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        int ans=m.size();
        vector<int>v;
        for(auto i:m) {
            v.push_back(i.first);
        }
        while(v.size()!=nums.size()) {
            v.push_back(0);
        }
        for(int i=0;i<nums.size();i++) {
            nums[i]=v[i];
        }
        return ans;
    }
};

Question:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]

Solution:

1. use set or map to filter the unique elements
2. use a vector to push the unique elements
3. after pushing unique ones, fill the vector with dummy values
4. put all the values from vector to nums
5. return m.size()

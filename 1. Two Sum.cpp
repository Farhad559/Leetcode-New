class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*vector<int>v;
        for(int i=0;i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]+nums[j]==target) {
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
            if(v.size()==2) break;
        }
        return v;*/
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            int need=target-nums[i];
            if(m.find(need) != m.end()) {
                return {m[need],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};

Question:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9

Solution 1:

1. Brute force 2 loops, O(n^2)

Solution 2:

# Using unordered map-
As you go through the numbers one by one,you ask:
“What number do I need to make the target?”
And you keep a note (a map) of all numbers you’ve already seen.

If nums[i] = 7 and target = 9,
then need = 9 - 7 = 2.
Check if we’ve already seen the needed number
Otherwise, remember this number

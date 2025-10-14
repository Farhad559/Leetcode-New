class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<=nums.size();i++) {
            m[i]=0;
        }
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        int ans=0;
        for(auto i:m) {
            if(i.second==0) {
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};

Question:
Input: nums = [3,0,1]
Output: 2
Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 
2 is the missing number in the range since it does not appear in nums.

Solution:

1. create a map and initialize value from 0 to size of nums with 0
2. enter the value of nums in map and check the count
3. map value whose count is zero is the answer

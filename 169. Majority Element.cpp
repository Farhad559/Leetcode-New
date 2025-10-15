class Solution {
public:
    int majorityElement(vector<int>& nums) {
    /*map<int,int>m;
    for(int i=0;i<nums.size();i++) {
        m[nums[i]]++;
    }
    int ans=0;
        for(auto i:m) {
            ans=max(ans,i.second);
        }
    int temp=0;
    for(auto i:m) {
        if(i.second==ans) {
            temp=i.first;
            break;
            }
        }
        return temp;*/
        sort(nums.begin(),nums.end());
        int maxi=1;
        int cur=1;
        int element=nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i]==nums[i-1]) {
                cur++;
            } else {
                cur=1;
            }
            if(cur>maxi) {
                maxi=cur;
                element=nums[i];
            }
        }
        return element;
    }
};

Question:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Solution 1:

1. using map to calculate the highest frequency
2. then find the element with that frequency

Soultion 2:

1. No extra space needed
2. find current element with most freq, and save that element
3. if new element with more freq is seen, update the element

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }
        int ans=0;
        for(auto i:m) {
            if(i.second==1) {
                ans=i.first;
                break;
            }
        }
        return ans;*/
        int xorr=0;
        for(int i=0;i<nums.size();i++) {
            xorr=xorr^nums[i];
        }
       return xorr; 
    }
};

Question:

Input: nums = [4,1,2,1,2]
Output: 4
Element with single occurance

Solution 1:

1. map to store frequency
2. uses extra space

Solution 2:

1. uses xor operation
2. xor gives the element with single occurance


XOR acts like a cancel switch:
If you XOR a number twice → it cancels to 0.
If you XOR a new number → it adds that number into the mix.

nums = [2, 3, 2]
x = 0 ^ 2
x = 2
next,
x = 2 ^ 3
2 → 10
3 → 11
10
^
11
=01 → 1  
next,
x = 1 ^ 2
1 → 01
2 → 10
01 ^ 10 = 11 → 3
So, 3 is the unique number.






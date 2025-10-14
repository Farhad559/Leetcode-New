class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        list<int>l;
        k=k%nums.size();
        for(int i=nums.size()-1;i>=nums.size()-k;i--) {
            l.push_front(nums[i]);
        }
        for(int i=0;i<nums.size()-k;i++) {
            l.push_back(nums[i]);
        }
        vector<int>v;
        for(auto i:l) v.push_back(i);
        for(int i=0;i<nums.size();i++) {
            nums[i]=v[i];
        }
        /* Simpler approach
        if (k == 0 || nums.size() == 0) return;
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());*/
    }
};

Question:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

# Why k%n:
Simple rule to remember:

  Rotating n times (where n = array size) brings you back to where you started.
  So only the extra rotations matter.
  That’s exactly what k % n does — it keeps only the extra rotations that
  actually change the array.
  
  Rotate 1 → [5,1,2,3,4]
  Rotate 2 → [4,5,1,2,3]
  Rotate 3 → [3,4,5,1,2]
  Rotate 4 → [2,3,4,5,1]
  Rotate 5 → [1,2,3,4,5]  <-- after 5 rotations, we’re back to the start
  Rotate 6 → [5,1,2,3,4]
  Rotate 7 → [4,5,1,2,3]

  After 5 rotations (same as array size), the array returns to its original position.
  So rotating 7 times is actually the same as rotating 7 % 5 = 2 times.

Solution 1:

1. declare list to use push_front
2. push_front last 3 element
3. push_back rest of element 0 to n-k
4. take a vector and move list elements to vector
5. replace nums elements with vector elements

Solution 2:

1. just reverse the whole nums
2. again reverse from begin to begin+k
3. lastly reverse other element next of k to last
   begin + k to end to return other element to real order


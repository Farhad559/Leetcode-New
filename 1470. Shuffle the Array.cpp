class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        for(int i=0; i<n; i++) {
            v.push_back(nums[i]);     
            v.push_back(nums[i+n]);    
        }
        return v;   
        /*vector<int>v1,v2;
        for(int i=0;i<n;i++) v1.push_back(nums[i]);
        for(int i=n;i<n*2;i++) v2.push_back(nums[i]);
        vector<int>v;
        for(int i=0;i<n;i++) {
            v.push_back(v1[i]);
            v.push_back(v2[i]);
       }
       return v;*/

    }
};

Question:
elements in the form [x1,x2,...,xn,y1,y2,...,yn].
Return the array in the form [x1,y1,x2,y2,...,xn,yn].

Solution 1:

1. Create a new vector
1. push current element & i+n th element in new vector
3. n = half-size, so i+n gives next element in other half

Solution 2:

1. create 2 new vector and store separate halfs
2. iterate upto n(half) and push elements from v1 & v2 respectively in a new vector

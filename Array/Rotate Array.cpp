class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
       k = k % nums.size();
       reverse(nums.begin()  ,  nums.end()-k); // reverse all remaining last k 
        reverse(nums.end() -k,  nums.end());  // reverse last k elements 
        reverse(nums.begin(), nums.end());  //reverse all ele
        
    }
};
TC - N
SC-1

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int best = INT_MIN, sum = 0;
        for (int k = 0; k < nums.size(); k++) {
        sum = max(nums[k],sum+nums[k]);
        best = max(best,sum);
        }
        return best;
        
    }
};

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

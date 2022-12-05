class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int write = 0;

        for(int read = 0 ; read < n ; read++){
            if(nums[read] != val){
                nums[write++] = nums[read];
            }
            
        }
        return write;
    }
};

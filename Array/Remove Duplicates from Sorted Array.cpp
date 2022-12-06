class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int write = 0;

        for(int read = 0 ; read<n ;read++){

            // voh number ke last tk jana hai 

            while(read+1 < n && nums[read+1] == nums[read]){
                read++;
            }

            nums[write] = nums[read];
            write++;
        }
        return write;        
    }
};

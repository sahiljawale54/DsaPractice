class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int temp = 1;
        vector<int> ans(n,1);

        //left side se product
        for(int i = 0 ; i < n ; i++){
            ans[i] = temp;
            temp = temp * nums[i];
        }
        //pro = 1 1 2 6
        temp = 1;

        //right side se product
        for(int i = n-1 ; i >=0 ; i--){
            ans[i] = ans[i]  * temp; // 6   2*4 hoga 
            temp = temp * nums[i]; //1*4 hua 4 
        }
        return ans ;
    }
};

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0 ;
	for (int i = 0 ; i < nums.size(); i++) {  //O(N)
		sum += nums[i];

	}
	int lsum = 0;
	int rsum = sum;

	for (int i = 0; i < nums.size(); ++i){ //O(N)
		/* code */
		rsum -= nums[i]; 
		if (lsum == rsum)
			return i;
		lsum += nums[i];

	}
	return -1;

        
    }
};

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int mini = INT_MAX;
    	int maxi = INT_MIN;
    	
    	for(int i = 0 ; i < N; i++){
    	    maxi = max(maxi,A[i]);
    	    mini = min(mini , A[i]);
    	}
    	return maxi + mini;
    }

};

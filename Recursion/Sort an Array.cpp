class Solution {
public:
    void merge(vector<int>& nums , int l , int r){
        int mid = (l+r)/2 ;

        int len1 = mid - l + 1;
        int len2 = r - mid;

        int *first = new int[len1+1];
        int *second = new int[len2 +1];

        //copy karna chalu 
        for(int i = 0 ; i < len1 ; i++){
            first[i] = nums[i+l];
        }
        for(int i = 0 ; i < len2 ; i++){
            second[i] = nums[i + mid + 1];
        }
        first[len1] = second[len2] = INT_MAX;

        //merge karna chalu
        int idx1 = 0;
        int idx2 =0 ;

        for(int i = l ; i <= r ; i++){
            if(first[idx1]  < second[idx2]){
                nums[i] = first[idx1++];
            }
            else{
                nums[i] = second[idx2++];
            }
        }
         delete []first;
         delete []second;

    }

    void mergesort(vector<int>& nums , int l , int r) {
        if( l >= r ){
            return;
        }
        int mid = (l+r)/2;

        // left part
        mergesort(nums, l , mid);

        //right part 
        mergesort(nums, mid+1 , r);

        // merge both 
        merge(nums , l , r);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums , 0 , nums.size()- 1 );
        return nums;
    }
};

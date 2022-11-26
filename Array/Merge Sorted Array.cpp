class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int last = m+n-1; // start filling from nums1 last index 
        while(m > 0 && n > 0){
            if(nums1[m-1] > nums2[n-1]){  // nums1 wala bada hai tho usko daal
                nums1[last] = nums1[m-1];
                m--;

            }
            else{
                nums1[last] = nums2[n-1]; // agar nums2 wala bada hai tho usko 
                n--;
            }
            last--;
        }

        //remaing from nums2 

        while(n>0){
            nums1[last] = nums2[n-1];
            n--;
            last--;
        }
    }
};

// TC - O(N)
//   SC-O(1)

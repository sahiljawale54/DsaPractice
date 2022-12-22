class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin()   ,  arr2.end());
        int size_1 = arr1.size();
        int size_2 = arr2.size();
        int count = 0;

        for(int i = 0 ; i< size_1 ; i++){
            int low = 0,high = size_2 -1;

            while(low<=high) {

                int mid = low + (high - low)/2;

                if(abs(arr2[mid] - arr1[i]) <=d){
                    count++ ;  break;
                }

                else if(arr2[mid] > arr1[i] + d) high = mid - 1;
                else low = mid + 1;

            }
        }
        return size_1 - count;
    }
};

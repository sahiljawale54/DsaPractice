class Solution {
public:
    bool ispossible(vector<int>&weights ,int days , int capacity ){

        int dayscount = 1;
        int packagesum = 0;

        for(int i = 0 ; i < weights.size();i++){

            if(packagesum + weights[i] <= capacity){
                packagesum+=weights[i];
            }
            else{
                dayscount++;
                packagesum = weights[i];
                if(dayscount > days || weights[i] > capacity) return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s = INT_MAX;
        int sum = 0;

        for(int i= 0 ; i < weights.size() ;i++){
            sum+=weights[i];
            s = min(weights[i],s);
        }
            
        
        int e = sum ;
        int ans = -1;
        int mid = s+ (e-s)/2;
        while(s<=e){
            if(ispossible(weights , days, mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s+ (e-s)/2;
        }

        return ans ;
    }
};

// TC-O(NLOGN)

class Solution {
public:
    int countPrimes(int n) {
        int count= 0;
        vector<bool> prime(n+1,true);
        prime[0]= prime[1]= false;
        
        for(int i = 2; i < n ; i++){
            
            if(prime[i]){
                count++;
                
                //mark ele coming in table of i
                for(int j = i*i; j<n; j=j+i){  //why i*i and not 2*i - no less than multiple of 2*i will be marked already 
                    prime[j]= false;
                }
            }
        }
       return count; 
    }
};

// O(Nlog(logN)), 
// Space: O(N).

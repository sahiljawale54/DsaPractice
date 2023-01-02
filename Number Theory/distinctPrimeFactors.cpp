class Solution {
public:
    vector<int> pre_primeno(){
        vector<int> prime(1001 , 1); // mark all as prime 

        for(int i = 2 ; i < 1001 ; i++){
            if(prime[i] == 1){
                for(int j = i * i ; j <1001 ;j+=i){
                    prime[j] = 0 ; //mark them as not prime
                }
            }
        }
        vector<int> ans ; 
        for(int i = 2  ; i < 1001 ; i++){
            if(prime[i] == 1) ans.push_back(i);
        }
        return ans;


    }
    int distinctPrimeFactors(vector<int>& nums) {
        vector<int> prime_no = pre_primeno();
        int count = 0;
        for(auto ele : prime_no){
            for(auto val : nums){
                if(val%ele == 0) {count++ ;break;}
            }
        }

        return count;
    }
};

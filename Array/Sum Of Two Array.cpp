
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n - 1;
    int j = m - 1;
    
    int carry = 0 ;
    vector<int> ans;
    
    while(i >= 0 && j >= 0 ){
        
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case  first array left 
    while(i >= 0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    //second case  second array left 
    while(j >= 0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    
    //carry left case;
    while(carry != 0 ){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin() ,  ans.end());
    return ans;
}

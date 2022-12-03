bool ispossible(vector<int> &stalls, int k,int mid){
    
    int cowsc=1;
    int  fixedcow = stalls[0];
    for(int i = 0 ; i < stalls.size();i++){
        if(stalls[i] - fixedcow >= mid){ 
            cowsc++;
            if(cowsc==k) {
                return true;
            }
           fixedcow = stalls[i];
        }
    }
    return false;
}


int solve(int n, int k, vector<int> &stalls) {
    
    int s = 0;
    sort(stalls.begin() , stalls.end());
    int e = stalls[n-1];
    int ans = -1;
    int mid= s+(e-s)/2;
    
    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}










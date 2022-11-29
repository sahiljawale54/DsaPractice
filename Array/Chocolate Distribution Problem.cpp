long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin() , a.end());
    
    long long  min_diff= LONG_MAX;
    
    for(int i = 0 ; i <= n-m;i++){
        long long l = i+m-1;
        min_diff = min(min_diff , (a[l ] - a[i]));
        
    }
    return min_diff;
    }   

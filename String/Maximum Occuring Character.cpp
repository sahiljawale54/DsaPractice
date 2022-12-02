char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        int num = 0;
        for(int i = 0 ; i <str.size() ; i++){
            num = str[i]- 'a';
            arr[num]++;
        }
        int maxfreq = -1 , ans = 0;
        for(int i = 0 ; i < 26;i++){
            if(maxfreq < arr[i]){
                ans = i ;
                maxfreq = arr[i];
            }
        }
        char finalans = 'a'+ ans;
        return finalans;
    }
TC-O(N)
  SC-O(1)

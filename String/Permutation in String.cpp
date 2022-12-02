class Solution {
    bool is_equal( int a[26], int b[26]){
        for(int i = 0; i<26;i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
}
public:
    bool checkInclusion(string s1, string s2) {
        
        int count1[26] ={0};
        for(int i = 0; i<s1.length() ;i++){
            count1[s1[i]-'a']++;
        }
        
        int i = 0;
        int k = s1.length();
        int count2[26] ={0};
        
        //sliding window
        while(i<s2.length() && i< k){
            count2[s2[i]-'a']++;
            i++;
        }
        
        if(is_equal(count1, count2))
            return 1;
        
        while(i<s2.length()){
            char newchar = s2[i];
            int index = newchar -'a';
            count2[index]++;
            
            char oldchar = s2[i-k];
            index = oldchar -'a';
            count2[index]--;
            
            i++;
            if(is_equal(count1, count2))
                return 1;
            
        }
        return 0;
    }
};

class Solution {
public:
    bool isCircularSentence(string s) {
        int n = s.size();
        for(int i = 0 ; i < n  ; i++){
            if(s[i] == ' ' && s[i-1] != s[i+1]){
                return 0 ;
            }
        }
        return s[0] == s[n-1];
        
    }
};

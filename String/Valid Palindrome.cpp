class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size()-1;

        while(st<e){
            //phele hi bin kaam ke mile tho
            while(st<e && !isalnum(s[st])) st++;
            //last mai se same 
            while(e>st && !isalnum(s[e])) e--;

            // if(abs(s[st++] - s[e--]) != 32) return 0;
                
            if(tolower(s[st++]) != tolower(s[e--])) return 0;

        }
        return true;
    }
};

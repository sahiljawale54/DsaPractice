/*Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int psize=p.length();
        int ssize=s.length();
        if(ssize < psize) return {}; //if p string is bigger than s then empty
        vector<int> pcount(26,0) ;
        vector<int> window(26,0) ;

        vector<int> ans ;
        for(int i =  0 ; i < psize ; i++){ // first window 
            pcount[p[i]-'a']++;
            window[s[i]-'a']++;
        }

        if(pcount == window) ans.push_back(0);  
      
      //sliding window
        for(int i = psize ; i < ssize ;i++){  // 3 aaya
           window[s[i-psize]-'a']--; //3-3=0 wale ka nikal 
           window[s[i]-'a']++;

           if(window == pcount) ans.push_back(i-psize+1);  // 3 - 3 +1 = 1 add karde
        }
        return ans ;
        
    }
};

TC-O(N)
SC-O(1)

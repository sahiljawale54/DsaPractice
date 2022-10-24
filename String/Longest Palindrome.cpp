/*409. Longest Palindrome
Easy
3.8K
223
Companies
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.*/

 int longestPalindrome(string s) {
        // 1 1 4 2 
       
        map<char , int > m;
        int ans = 0;
        int oddwale = 0;
        for(int i = 0 ; i <s.size();i++){
            m[s[i]]++;
        }
        for(auto i = m.begin() ; i!=m.end();i++){
           if( i->second %2==0){
               ans=ans+i->second;
           }
           else if((i->second-1)%2==0){
               ans+=i->second -1;
               oddwale++;
           }
        
        }
      if(oddwale) return ++ans;
      else return ans;
    }

//TC-O(N)
//SC-O(1)

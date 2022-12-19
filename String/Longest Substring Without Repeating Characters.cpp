class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> mp(256 , -1);

        int left = 0 , right = 0;
        int n = s.size();
        int max_len = 0;

        while(right  < n){
            //if present in mp updated left pointer
            if(mp[s[right]] != -1) left = max(left , mp[s[right]]+1); // max so that l ke piche na ho left

            //updated last idex of that ele im mp 
            mp[s[right]] = right;
            
            max_len = max(max_len , right-left +1);
            right++;
        }
        return max_len;
    }
};
// tc-O(N)
//   SC- O(N)

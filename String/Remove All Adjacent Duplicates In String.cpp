class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(auto ch : s){
            if(ans.back() == ch) ans.pop_back();  //back last ele access karne ke liye 

            else ans.push_back(ch);
        }
        return ans;
    }
};

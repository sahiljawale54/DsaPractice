class Solution {
    private:
    string mapping[10] = { "" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        
    void solve(string digits , int idx , string op , vector<string>& ans){
        //base case
        if(idx >= digits.size()){
            ans.push_back(op);
            return;
        }
        int num = digits[idx]-'0';
        string value = mapping[num];

        for(int i = 0 ; i < value.size() ; i++){
            op.push_back(value[i]);
            solve(digits  , idx+1 , op , ans );
            op.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;
        string op = "";
        int idx = 0;
        solve(digits , idx , op , ans );
        return ans;
    }
};

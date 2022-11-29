class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(auto ele :nums){
            if(s.find(ele) != s.end()) return true;
            s.insert(ele);
        }
        return false;
        
    }
};

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        long long  ans = 0 ;
        int n = skill.size();
        int i = 0 ; 
        int j = n-1;
        long long  sum =skill[0]+ skill[n-1];
        

        while( i <= j ){
            long long currsum = skill[i] + skill[j];

            if(sum != currsum )return -1;

            ans = ans +(skill[i] * skill[j]);
            i++;
            j--;
        }
        return ans;
        
    }
};

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int bars = 0;
        int total_cost = 0;
        for(int i = 0 ; i <costs.size() ; i++){
            if(total_cost + costs[i]  <= coins) {
                bars++;
                total_cost += costs[i];
            }
        }
        return bars;
    }
};

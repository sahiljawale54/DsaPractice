    class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0 ;
        int total  = 0;
        int starting_point = 0;

        for(int i = 0 ; i < gas.size() ; i++){
            int consume = gas[i] - cost[i];
            tank += consume;

            if(tank < 0 ) starting_point = i + 1 , tank = 0;
            total += consume;
        }
        if(total < 0) return -1;
        else return starting_point;
    }
};

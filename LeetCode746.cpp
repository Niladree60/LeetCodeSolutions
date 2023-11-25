class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);

        for(int i = cost.size() - 3 ; i >= 0 ; i--) {
            int double_jump = cost[i] + cost[i+2];
            int single_jump = cost[i] + cost[i+1];
            cost[i] = min(double_jump,single_jump);
        }

        return min(cost[0],cost[1]);
    }
};

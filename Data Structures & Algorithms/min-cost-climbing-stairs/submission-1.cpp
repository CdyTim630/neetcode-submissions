class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a = cost[0];
        int b = cost[1];

        for (int i = 2; i < cost.size(); i++) {
            int cur = min(a, b) + cost[i];
            a = b;
            b = cur;
        }

        return min(a, b);
    }
};
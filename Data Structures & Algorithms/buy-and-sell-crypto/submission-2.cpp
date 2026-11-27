class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int ans = 0;

        while (r < prices.size()) {
            if (prices[r] < prices[l]) {
                // 發現更便宜的買入價格
                // 如何更新 l？
                l = r;
            } else {
                // 計算當前利潤
                // 如何更新 ans？
                ans = max (ans, prices[r] - prices[l]);
            }

            r++;
        }

        return ans;
    }
};
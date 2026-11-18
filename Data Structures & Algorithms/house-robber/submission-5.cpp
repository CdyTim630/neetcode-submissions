class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();
        if (N == 0) return 0;
        else if (N == 1) return nums[0];
        
        vector<int> dp(N);

        dp[0] = nums[0];
        dp[1] = max(nums[1],dp[0]);


        for (int i = 2 ; i < N ; i++){
            dp[i] = max(nums[i]+dp[i-2],dp[i-1]);
        }

        return dp[N-1];

    }
};

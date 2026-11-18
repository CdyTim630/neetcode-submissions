class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();
        if (N == 0) return 0;
        else if (N == 1) return nums[0];
        
        vector<int> dp1(N);
        vector<int> dp2(N);

        dp1[0] = nums[0];
        dp1[1] = max(nums[1],dp1[0]);


        for (int i = 2 ; i < N-1; i++){
            dp1[i] = max(nums[i]+dp1[i-2],dp1[i-1]);
        }

        dp2[0] = 0;
        dp2[1] = nums[1];

        for (int i = 2 ; i < N; i++){
            dp2[i] = max(nums[i]+dp2[i-2],dp2[i-1]);
        }

        return max(dp1[N-2],dp2[N-1]);
        

    }
};

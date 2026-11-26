class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int N = nums.size();

        if (nums[0] > 0 || nums[N-1] < 0) return {};

        vector<vector<int>> ans;

        for (int i = 0 ; i < N - 2 ; i++){
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int l = i + 1;
            int r = N - 1;

            while (l<r){
                int sum = nums[l] + nums[r] + nums[i];
                if (sum == 0){
                    ans.push_back({nums[i],nums[l],nums[r]});

                    while (l<r && nums[l] == nums[l+1]) l++;
                    while (l<r && nums[r] == nums[r-1]) r--;

                    l++;
                    r--;
                }
                else if (sum < 0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }

        return ans;
    }
};

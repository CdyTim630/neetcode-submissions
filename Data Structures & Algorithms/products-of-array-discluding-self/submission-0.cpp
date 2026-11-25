class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N = nums.size();
        vector<int> pre;
        pre.push_back(1);
        for (int i = 1 ; i < N ; i++){
            pre.push_back(pre[i-1] * nums[i-1]);
        }

        vector<int> post;
        post.push_back(1);
        for (int i = N - 2 ; i >= 0 ; i--){
            post.push_back(post.back() * nums[i+1]);
        }
        reverse(post.begin(),post.end());

        vector<int> ans;
        for (int i = 0 ; i < N ; i++){
            ans.push_back(pre[i]*post[i]);
        }
        
        return ans;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int N = nums.size();
        unordered_set<int> s;
        for (auto num : nums) s.insert(num);

        int ans = 0;

        for (auto num : s){
            if (!s.count(num-1)){
                int length = 1;
                while(s.count(num+length)){
                    length++;
                }
                ans = max(ans,length);
            }
        }
        return ans;
    }
};

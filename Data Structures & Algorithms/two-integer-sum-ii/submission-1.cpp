class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int N = numbers.size();
        int l = 0;
        int r = N - 1;
        vector<int> ans;
        while (true){
            if (numbers[l] + numbers[r] == target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
            else if (numbers[l] + numbers[r] > target) r--;
            else l++;
        }
    }
};

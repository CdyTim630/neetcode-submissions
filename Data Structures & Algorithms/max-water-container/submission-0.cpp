class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea = 0;
        int N = heights.size();
        for (int l = 0, r = N - 1; l < r; ){
            maxarea = max(maxarea,(r-l) * min(heights[l],heights[r]));
            if (heights[l] < heights[r]) l++;
            else r--;
        }
        return maxarea;
    }
};

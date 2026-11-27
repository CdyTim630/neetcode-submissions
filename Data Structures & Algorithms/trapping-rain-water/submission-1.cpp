class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int N = height.size() - 1;

        int l = 0;
        int r = N;
        int leftmax = 0, rightmax = 0;

        while (l < r) {
            leftmax = max(leftmax, height[l]);
            rightmax = max(rightmax, height[r]);

            if (leftmax <= rightmax) {
                ans += leftmax - height[l];
                l++;

            } else {
                ans += rightmax - height[r];
                r--;
            }
        }
        return ans;
    }
};
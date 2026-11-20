class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int mid = (l+r)/2;


        while (l<r){
            mid = (l+r)/2;
            if (nums[mid] < target) l = mid + 1;
            else if (nums[mid] > target) r = mid;
            else return mid;
        }

        if (nums[mid] != target) return -1; 
    }
};

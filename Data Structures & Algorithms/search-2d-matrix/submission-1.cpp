class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> arr;
        for (auto i = 0 ; i < m ; i++){
            for (auto j = 0 ; j < n ; j++){
                arr.push_back(matrix[i][j]);
            }
        }

        int l = 0;
        int r = m*n - 1;

        while (l <= r){
            int mid = l + (r-l) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};
 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix[0].size() - 1;

        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][left] <= target && matrix[i][right] >= target){
                while(left <= right){
                    int mid = left + (right - left) / 2;

                    if(matrix[i][mid] == target){
                        return true;
                    } else if (matrix[i][mid] > target){
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = rows - 1;
        int mid;

        while(left <= right){
            mid = left + (right - left) / 2;

            if (target > matrix[mid][cols-1]){
                left = mid + 1;
            } else if (target < matrix[mid][0]){
                right = mid - 1;
            } else {
                break;
            }
        }

        if(left > right){
            return false;
        }

        int row = mid;

        left = 0;
        right = cols - 1;

        while(left <= right){
            mid = left + (right - left) / 2;

            if(target < matrix[row][mid]){
                right = mid - 1;
            } else if (target > matrix[row][mid]){
                left = mid + 1;
            } else {
                return true;
            }
        }

        return false;
    }
};

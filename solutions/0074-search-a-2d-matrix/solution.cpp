class Solution {
private:
    bool searchRowMatrix(vector<int>& mat, int target) {
        int low = 0;
        int high = mat.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mat[mid] < target) {
                low = mid + 1;
            } else if (mat[mid] > target) {
                high = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int lowOut = 0, highOut = mat.size() - 1;

        while (lowOut <= highOut) {

            int mid = lowOut + (highOut - lowOut) / 2;

            if (mat[mid][0] > target) {
                highOut = mid - 1;
            } else {
                lowOut = mid + 1;
            }
            if (mat[mid][0] <= target &&
                mat[mid][mat[mid].size() - 1] >= target) {
                return searchRowMatrix(mat[mid], target);
            }
        }
        return false;
    }
};

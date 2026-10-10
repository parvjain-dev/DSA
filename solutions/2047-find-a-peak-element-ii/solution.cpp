class Solution {
// private:
//     int zerothCol(vector<vector<int>>& mat) {
//         int maxi = -1;
//         int maxiNum = INT_MIN;
//         for (int i = 0; i < mat.size(); i++) {
//             if (mat[i][0] > maxiNum) {
//                 maxi = i;
//                 maxiNum = mat[i][0];
//             }
//         }
//         if (mat[maxi][0] > mat[maxi][1]) {
//             return maxi;
//             // return {maxi, 0};
//         }
//         return -1;
//     }
//     int zerothColLast(vector<vector<int>>& mat) {
//         int maxi = -1;
//         int maxiNum = INT_MIN;
//         int size = mat[0].size() - 1;
//         for (int i = 0; i < mat.size(); i++) {
//             if (mat[i][size] > maxiNum) {
//                 maxi = i;
//                 maxiNum = mat[i][size];
//             }
//         }
//         if (mat[maxi][size] > mat[maxi][size - 1]) {
//             return maxi;
//             // return {maxi, size};
//         }
//         return -1;
//     }

public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        if (mat.size() == 1) {
            cout << "check1";
            int maxi = -1;
            int maxiNum = INT_MIN;
            for (int i = 0; i < mat[0].size(); i++) {
                if (mat[0][i] > maxiNum) {
                    maxi = i;
                    maxiNum = mat[0][i];
                }
            }
            return {0, maxi};
        }
        if (mat[0].size() == 1) {
            int maxi = -1;
            int maxiNum = INT_MIN;
            for (int i = 0; i < mat.size(); i++) {
                if (mat[i][0] > maxiNum) {
                    maxi = i;
                    maxiNum = mat[i][0];
                }
            }
            return {maxi, 0};
        }
        // int ans = zerothCol(mat);
        // if (ans != -1) {
        //     return {ans, 0};
        // }

        // ans = zerothColLast(mat);
        // if (ans != -1) {
        //     int size = mat[0].size() - 1;
        //     return {ans, size};
        // }

        int low = 0, high = mat[0].size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            cout<<mid<<" ";
            int maxi = -1;
            int maxiNum = INT_MIN;
            for (int i = 0; i < mat.size(); i++) {
                if (mat[i][mid] > maxiNum) {
                    maxi = i;
                    maxiNum = mat[i][mid];
                }
            }
            // cout<<"***** "<<maxi<<" "<<maxiNum;
            if (mid == 0) {
                cout<<"check 1";
                if (mat[maxi][mid] > mat[maxi][mid + 1]) {
                    return {maxi, mid};
                }
                low = mid + 1;
            } else if (mid == mat[0].size() - 1) {
                cout<<"check 2";
                if (mat[maxi][mid] > mat[maxi][mid - 1]) {
                    return {maxi, mid};
                }
                high = mid - 1;
            } else {
                cout<<"check 3";
                if (mat[maxi][mid] > mat[maxi][mid - 1] &&
                    mat[maxi][mid] > mat[maxi][mid + 1]) {
                    return {maxi, mid};
                } else {
                    if (mat[maxi][mid] < mat[maxi][mid - 1]) {
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
            }
        }
        return {-1, -1};
    }
};

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int oneDelete = INT_MAX;
        int noDelete = arr[0];
        int temp= arr[0];
        int res = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int prevNoDel = noDelete;
            int prevOneDel = oneDelete;
            noDelete = max(prevNoDel + arr[i], arr[i]);
            if(prevOneDel != INT_MAX) {
                temp = prevOneDel+ arr[i];
            }
            oneDelete = max(prevNoDel, temp );
            res = max(res, max(oneDelete, noDelete));
        }
        return res;
    }
};

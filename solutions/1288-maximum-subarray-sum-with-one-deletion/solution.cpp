class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int oneDelete = INT_MIN;
        int noDelete = arr[0];
        int ans = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int v1 = arr[i];
            int prevOneDelete = oneDelete;
            int prevNoDelete = noDelete;
            if (prevOneDelete != INT_MIN)
                oneDelete = prevOneDelete + arr[i];
            else
                oneDelete = INT_MIN;
            oneDelete = max(oneDelete, prevNoDelete);
            noDelete = max(prevNoDelete + arr[i], arr[i]);

            ans = max(ans, max(noDelete, oneDelete));
        }
        return ans;
    }
};

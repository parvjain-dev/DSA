class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int oneDelete= INT_MIN;
        int noDelete = arr[0];
        int ans = arr[0];

        for(int i =1; i< arr.size(); i++){
            int prevOnedelete = oneDelete;
            int prevNoDelete=  noDelete;
            int temp=INT_MIN;
            if(prevOnedelete!=INT_MIN){
                temp = prevOnedelete+arr[i];
            }
            noDelete = max(prevNoDelete +arr[i], arr[i]);
            oneDelete = max(temp, prevNoDelete);
            ans = max(ans, max(noDelete, oneDelete));
        }
        return ans;
    }
};

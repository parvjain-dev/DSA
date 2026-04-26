class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len= nums.size();
        vector<int> res(len,0);
        int index=len-1, j=len-1, i=0; 

        while(i<=j){
            int a = nums[i]*nums[i];
            int b = nums[j]*nums[j];

            if(a>b){
                res[index]=a;
                i++;
                index--;
            }else{
                res[index]=b;
                j--;
                index--;
            }
        }
        return res;
    }
};

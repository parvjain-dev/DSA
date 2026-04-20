class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int i=0, j=nums.size()-1;

        while(i<=j){
            if(pow(nums[i],2)<pow(nums[j],2)){
                res.push_back(pow(nums[j],2));
                j--;
            }else{
                res.push_back(pow(nums[i],2));
                i++;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

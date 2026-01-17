class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int prefix = 1, suffix=1;
        ans[0]=1;
        for(int i=1; i< ans.size(); i++){
            prefix*= nums[i-1];
            ans[i]= prefix;
        }
        for(int i=nums.size()-1; i>0; i--){
            suffix*= nums[i];
            ans[i-1]=ans[i-1]* suffix;
        }
        
        return ans;
    }
};

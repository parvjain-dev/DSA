class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int prefix=0,suffix=0;
        vector<int> ans(nums.size());
        ans[0]=0;
        for(int i=1;i<nums.size();i++){
                prefix+=nums[i-1];
                ans[i]=prefix;
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=abs(suffix-ans[i]);
            suffix+=nums[i];
        }
        return ans;
    }
};

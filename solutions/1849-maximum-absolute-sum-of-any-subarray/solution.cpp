class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=nums[0];
        int mini = nums[0];
        int ans= nums[0];
        int bestEnding= nums[0];
        int minEnding= nums[0];
        if(nums.size()==1) return abs(nums[0]) ;
        for(int i =1; i< nums.size(); i++){
            int v1= nums[i];
            int prevBestEnding= bestEnding;
            int prevminEnding= minEnding;
            bestEnding = max(prevBestEnding+nums[i], v1);
            minEnding= min(prevminEnding+nums[i], v1);
            maxi= max(maxi, bestEnding);
            mini= min(mini,minEnding);
            ans= max(ans,max(abs(maxi), abs(mini)));
        }
        return ans;
    }
};

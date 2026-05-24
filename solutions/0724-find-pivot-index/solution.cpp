class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        int prefixSum =0;
        for(int i =0; i< nums.size() ;i++){
            prefix[i]=prefixSum;
            prefixSum+= nums[i];

        }
        int suffixSum =0;
        int ans=-1;
        for(int i = nums.size()-1; i>=0; i--){
            if(prefix[i] == suffixSum ){
                ans = i;
            }
            suffixSum += nums[i];
        }
        return ans;
    }
};

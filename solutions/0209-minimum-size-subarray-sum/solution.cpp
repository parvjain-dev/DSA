class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0 , i=0, len= INT_MAX;

        for(int j=0; j< nums.size(); j++){
            sum+=nums[j];
            while(sum>=target){
                len= min(len, j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if(len==INT_MAX) return 0;
        return len;
    }
};

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0; 
        int sum =0;
        int mini = INT_MAX;
        for(int j=0; j< nums.size(); j++){
            sum+=nums[j];
            while(sum>= target){
                mini = min(mini, j-i+1);
                sum-=nums[i];
                i++;
            }

            
        }
        if(mini ==INT_MAX) return 0;
        return mini;
    }
};

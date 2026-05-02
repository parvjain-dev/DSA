class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxi = INT_MIN;

        int i =0, j=0;

        while(j<nums.size()){
            sum+=nums[j];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0; 
            }
            j++;
        }
        return maxi;
    }
};

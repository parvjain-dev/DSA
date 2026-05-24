class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum =nums[0]; 
        int maxi= nums[0];
        int mini = nums[0];
        int ansMax= nums[0];
        int ansMin = nums[0];
        for(int i =1; i< nums.size(); i++){
            totalSum+= nums[i];
            int prevMax= maxi; 
            int prevMin = mini;
            maxi = max(prevMax+nums[i], nums[i]);
            mini = min(prevMin+nums[i], nums[i]);
            ansMax= max(ansMax, maxi);
            ansMin= min(ansMin, mini);
        }
        cout<< ansMax<< " "<<ansMin<<" "<<totalSum<<endl;
         if (ansMax < 0) return ansMax;
        return max(ansMax, totalSum - ansMin);
    }
};

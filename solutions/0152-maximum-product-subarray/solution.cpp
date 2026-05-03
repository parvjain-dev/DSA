class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding=nums[0];
        int ans=nums[0];
        int j=1;
        int temp, temp2 ;
        while(j<nums.size()){
            int v1 = maxEnding*nums[j];
            int v2= minEnding* nums[j];

            int v3 = nums[j];
            maxEnding= max(v3, max(v1,v2));
            minEnding= min(v3, min(v1,v2));
            cout<<maxEnding<<" "<<minEnding<<" "<<endl;
            temp= max(maxEnding, minEnding);
            // temp2= max(temp, nums[j]);
            ans=max(ans, temp);
            j++;
            
            
        }
        return ans;
    }
};

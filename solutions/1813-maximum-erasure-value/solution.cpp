class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0, maxi=0, i=0;

        for(int j=0; j<nums.size();j++){
            mp[nums[j]]++;
            sum+=nums[j];
            while(mp[nums[j]]>1){
                sum-=nums[i];
                mp[nums[i]]--;
                i++;
                
            }
            maxi=max(sum,maxi);

        }
        return maxi;
    }
};

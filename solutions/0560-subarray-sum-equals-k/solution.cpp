class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int prefix=0;
        int ans=0;
        for(int i=0; i< nums.size(); i++){
            mp[prefix]++;
            prefix+=nums[i];
           
            
            if(mp.count(prefix-k)){
                ans+=mp[prefix-k];
            }
            
        }
        return ans;
    }
};

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum =0, count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i =0; i< nums.size(); i++){
            preSum+= nums[i];
            // if(preSum ==k) count++;

            if(mp.find(preSum-k)!= mp.end()) count+= mp[preSum-k];

                mp[preSum]++;

        }
        return count;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        for(int k=0; k< nums.size(); k++){
            mp[nums[k]]=k;
        }
        for(int i=0; i< nums.size(); i++){
            if(!mp.empty() && mp.count(target-nums[i]) && i!= mp[target-nums[i]]){
                return {i, mp[target-nums[i]]};
            }
        }
        return {-1,-1};
    }
};

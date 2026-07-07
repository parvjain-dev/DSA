class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        int count =0; 
        for(int i=0; i< nums.size(); i++){
            mp[nums[i]]++;
            if( mp[nums[i]] > nums.size()/3 && (res.size()==0||res[0]!=nums[i])){
                if(res.size()==2) break;
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};

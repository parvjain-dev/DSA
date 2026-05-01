class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1) return false;
        int i =0, j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                return true;
            }
            i++;
            j++;
        }
        return false;

    }
};

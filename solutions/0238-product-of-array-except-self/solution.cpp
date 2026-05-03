class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size(),0);

        int mul=1;
        //for prefix 
        for(int i =0; i< nums.size(); i++){
            prefix.push_back(mul);
            mul*=nums[i];
        }
        mul=1;
        for(int i =nums.size()-1; i>=0; i--){
            suffix[i]=mul;
            mul*=nums[i];
        }

        for(int i =0; i< nums.size(); i++){
            prefix[i]= prefix[i]*suffix[i];
        }
        return prefix;

    }
};

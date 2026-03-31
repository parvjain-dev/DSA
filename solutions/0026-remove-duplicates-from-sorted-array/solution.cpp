class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0, j= 1;

        while(j<nums.size()){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                swap(nums[i],nums[j]);
                j++;
            }

        }
        int ans=0; 
        for(int k=0; k<=i; k++){
            ans++;
        }
        return ans;

    }
};

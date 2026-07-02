class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2)return;
        int i=nums.size()-2; 
        while(i>=0){
            if(nums[i]< nums[i+1]){
                break;
            }
            i--;
        }
        cout<<i;
        if(i==-1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int j= nums.size()-1; j>i; j--){
            if(nums[j]>nums[i]){
                swap(nums[i], nums[j]);
                break;
            }
        }

        reverse(nums.begin()+i+1, nums.end());
    }
};

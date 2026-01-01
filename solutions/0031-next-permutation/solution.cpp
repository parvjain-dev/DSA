class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i =nums.size()-2, breakPoint=-1 ,breakIndex=-1 ;

        while(i>=0){
            if(nums[i]<nums[i+1]){
                breakPoint =nums[i];
                breakIndex=i;
                break;
            }
            i--;
        }
        if(breakIndex ==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        int j = nums.size()-1; 
        while(j>=0){
            if(nums[j]>breakPoint){
                cout<<j<<" ";
                swap(nums[j],nums[breakIndex]);
                break;
            }
            j--;
        }
        reverse(nums.begin()+breakIndex+1, nums.end());
    }
};

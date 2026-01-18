class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0; 
        int prefix=0;
        for(int i=0; i< nums.size(); i++){
            sum+= nums[i];
        }
        for(int i =0; i< nums.size(); i++){
            sum-=nums[i];
            if(prefix==sum){
                return i;
            }
            prefix+=nums[i];
        }
        return -1;
    }
};

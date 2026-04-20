class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3){
            return nums.size();
        }
        int read=2, write =2;
        while(read<nums.size()){
            if(nums[read]==nums[write-2]){
                read++;
            }
            else{
                nums[write]=nums[read];
                read++;
                write++;

            }
        }
        return write;
    }
};

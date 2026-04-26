class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int reader=2, writer=2;
        if(nums.size()<3) return nums.size();
        while(reader<nums.size()){
            if(nums[reader]==nums[writer-2]){
                reader++;
            }else{
                nums[writer]=nums[reader];
                reader++;
                writer++;
            }
        }
        return writer;
    }
};

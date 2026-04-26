class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int reader=1, writer=1;

        while(reader<nums.size()){
            if(nums[reader]==nums[writer-1]){
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

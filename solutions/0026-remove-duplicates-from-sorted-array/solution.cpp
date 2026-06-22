class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return 1; 

        int reader =1, writer=1;

        while(reader<nums.size()){
            if(nums[reader]!=nums[writer-1]){
                nums[writer]=nums[reader];
                writer++;
            }
            reader++;
        }
        return writer;
    }
};

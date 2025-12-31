class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i =0, j=0;
        vector<int> res;
        while(i<nums.size() && j<nums.size()){
            while(nums[i]<0){
                i++;
            }
            res.push_back(nums[i]);
            i++;

             while(nums[j]>0){
                j++;
            }
            res.push_back(nums[j]);
            j++;

        }
        return res;
    }
};

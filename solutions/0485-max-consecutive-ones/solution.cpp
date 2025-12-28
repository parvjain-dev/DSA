class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0, count = 0, ans = 0;
        while (j < nums.size()) {
           if(nums[j]==1){
            count++;
            ans= max(ans, count);
            j++;
           }
           else{
            count=0;
            j++;
           }
        }

        return ans;
    }
};

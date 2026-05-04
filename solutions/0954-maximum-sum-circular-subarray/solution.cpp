class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        int i = 1;
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int sum = 0;
        int maxAnswer=nums[0];
        int minAnswer= nums[0];
        for(int k=0; k< nums.size(); k++){
            sum+= nums[k];
        }
        while (i < nums.size()) {
            int v2 = nums[i];
            maxEnding = max(maxEnding + nums[i], v2);
            maxAnswer=max(maxAnswer, maxEnding);
            minEnding = min(minEnding + nums[i], v2);
            minAnswer=min(minAnswer, minEnding);
            i++;
        }
        int temp = sum-minAnswer;
        if(maxAnswer<0) return maxAnswer;
        return max(temp, maxAnswer);
    }
};

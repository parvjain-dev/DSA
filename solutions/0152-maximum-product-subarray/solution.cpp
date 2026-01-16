class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pos = 0, neg = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                pos++;
            else if (nums[i] < 0)
                neg++;
        }
        int ans = nums[0];
        int maxi = INT_MIN;
        int prefix = 1, suffix = 1;
        if (nums.size() < 2)
            return nums[0];
        for(int i=0; i< nums.size(); i++){
            if(prefix ==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*= nums[i];
            suffix*= nums[nums.size()-i-1];

            ans= max(ans,max(prefix,suffix));
        }

        return ans;
    }
};

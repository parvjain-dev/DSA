class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(), nums.end());
        int i =0, j=i+1;
        int maxi= 0;
        while(j< nums.size()){
            maxi= max(maxi, nums[j]-nums[i]);
            i++;
            j++;
        }
        return maxi;
    }
};

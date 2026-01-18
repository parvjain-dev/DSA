class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high = nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid = low+(high-low)/2;

            if(nums[mid]>target){
                high = mid-1;
                ans= high +1;
            }
            else if(nums[mid]<target){
                low= mid+1;
                ans=low;
            }
            else{
                return mid;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        auto max_ele = max_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(),nums.end(),0);

        int low =*max_ele , high = sum;
        int ans =-1;
        while(low<=high){
            int mid = low+(high-low)/2;

            int k_temp=1 ,curr_sum=0;
            int i =0;
            while(i<nums.size()){
                if(curr_sum+nums[i] <= mid){
                    curr_sum+=nums[i];
                    i++;
                }else{
                    curr_sum=0;
                    k_temp++;
                }
            }
            if(k_temp<= k){
                ans = mid;
                high = mid-1;
            }else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};

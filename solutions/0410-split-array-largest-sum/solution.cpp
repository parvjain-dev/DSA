class Solution {
private:
    int max_arr(vector<int>& nums){
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    int sum_arr(vector<int>& nums){
         int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        long long  ans =-1;
        if(nums.size()<k) return ans;
        int low = max_arr(nums) , high = sum_arr(nums);
        
        while(low<= high){
            int mid = low+(high -low)/2;

            int l =0, k_temp = 1;
            long long sum = 0;
            while(l<nums.size()){
                if(sum + nums[l]<=mid){
                    sum+= nums[l];
                    l++;
                    
                }else{
                    sum= nums[l];
                    l++;
                    k_temp++;
                    
                }
            }
            if(k_temp<=k){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};

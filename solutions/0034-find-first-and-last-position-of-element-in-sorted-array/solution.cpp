class Solution {
public:
    int first_index(vector<int>& nums, int target, int low, int high ){
        int first=-1;
        while(low<= high){
            int mid = low+(high-low)/2;
            if(nums[mid]>target) high = mid-1;
            else if(nums[mid]<target) low= mid+1;
            else{
                first= mid;
                high = mid-1;
            }

        }
        return first;
    }
    int last_index(vector<int>& nums, int target, int low, int high ){
        int last=-1;
        while(low<= high){
            int mid = low+(high-low)/2;
            if(nums[mid]>target) high = mid-1;
            else if(nums[mid]<target) low= mid+1;
            else{
                last= mid;
                low = mid+1;
            }

        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // int first=-1, last=-1;
        int f= first_index(nums,target, 0, nums.size()-1);
        int l= last_index(nums,target, 0, nums.size()-1);
        cout<<f<<" "<<l;
        return {f,l};
    }
};

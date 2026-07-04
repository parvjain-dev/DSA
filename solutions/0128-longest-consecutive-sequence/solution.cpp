class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1) return 1;
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int i=1;
        int longest = 1, count=1;
        while(i<nums.size()){
            while(i<nums.size()&&nums[i]==nums[i-1]){
                i++;
            }
            if(i>=nums.size()){
                break;
            }
            if(nums[i]==nums[i-1]+1){
                count++;
            }else{
                count =1;
            }
            longest= max(count, longest);
            i++;
        }
        return longest;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0) return 0;
        for(int i =0; i< nums.size(); i++){
            st.insert(nums[i]);
        }
        int maxi =INT_MIN;
        for(auto it:st){
            int curr=it;
            int count =0;
            if (st.count(it - 1)) continue;
            while(st.count(curr)){
                curr++;
                count++;
            }
            maxi=max(maxi, count);
        }
        return maxi;
    }
};

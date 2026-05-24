class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;

        for(int i =0; i< nums.size(); i++){
            st.insert(nums[i]);
        }
        int maxi =0;
        for(auto it: st){
            int count =1;
            int temp =it;
            if(!st.contains(temp-1)){
                while(st.contains(temp+1)){
                    count++;
                    temp = temp+1;
                }
                maxi = max(count, maxi);
            }
        }
        return maxi;
    }
};

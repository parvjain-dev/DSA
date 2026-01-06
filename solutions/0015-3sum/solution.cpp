class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j, k = nums.size() - 1;
        int prevJ, prevK, prevI;
        vector<vector<int>> ans;
        cout<<prevJ<<" "<<prevK;
        while (i < nums.size()) {
            if(i>0 && nums[i]== nums[i-1]){
                i++;
                continue;
            }
            j = i + 1;
            k = nums.size() - 1;
            while (j < k) {
                int sum = nums[j] + nums[k] + nums[i];
                if (sum < 0 ) {

                    j++;
                } else if (sum > 0 ) {

                    k--;
                } else {
                    prevJ = nums[j];
                    prevK = nums[k];
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == prevJ)
                        j++;
                    while (j < k && nums[k] == prevK)
                        k--;
                }
            }
            i++;
        }

        return ans;
    }
};

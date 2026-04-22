class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int diff = INT_MAX;
        int closest=nums[0] + nums[1] + nums[2]; ;

        int i = 0;
        while (i < nums.size()-2 ) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int summ = nums[i] + nums[j] + nums[k];
                if(summ==target) return summ;
                int temp =abs(summ-target);
                 if (temp < diff) {
                        diff = temp;
                        closest = summ;
                       
                    }
                if(summ<target) j++;
                else k--;
            }
            i++;
        }
        return closest;
    }
};

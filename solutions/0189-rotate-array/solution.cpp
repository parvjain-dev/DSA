class Solution {
public:
    void reverseArr(vector<int>& nums, int low , int high){
        int i =low; 
        int j =high;
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverseArr(nums, 0, nums.size()-(k+1));
        reverseArr(nums, nums.size()-k, nums.size()-1);
        reverseArr(nums, 0, nums.size()-1);
    }
};

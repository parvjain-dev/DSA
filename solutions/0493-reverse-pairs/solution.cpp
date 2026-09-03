class Solution {
    // int count = 0;

private:
    int merge(vector<int>& nums, int low, int mid, int high) {
        int i = low, j = mid + 1;
        int k = low, l = mid + 1;
        int count=0;
        vector<int> temp;
        while (k <= mid && l <= high) {
            if (nums[k] <= 1ll * 2 * nums[l]) {
                k++;
            } else {
                count += mid - k + 1;
                l++;
            }
        }
        while (i <= mid && j <= high) {
            if (nums[i] > nums[j]) {
                temp.push_back(nums[j]);
                j++;

            } else {

                temp.push_back(nums[i]);
                i++;
            }
        }
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            nums[low + k] = temp[k];
        }
        return count;
    }
    int mergeSort(vector<int>& nums, int low, int high) {

        if (low >= high)
            return 0;
        int mid = low + (high - low) / 2;
        int count=0;
        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);

        count += merge(nums, low, mid, high);
        return count;
    }

public:
    int reversePairs(vector<int>& nums) {
        if (nums.size() < 2)
            return 0;
        return mergeSort(nums, 0, nums.size() - 1);
    }
};

class Solution {
public:
    // long long count = 0;
    int merge(vector<int>& nums, int low, int mid, int high) {
        int i = low, j = mid + 1;
        long long count =0; 
        vector<int> temp;
        int k = low, l = mid + 1;
        while (k <= mid && l <= high) {
            if ((long long)nums[k] > (long long)nums[l] * 2) {
                count += mid - k + 1;
                l++;
            } else {
                k++;
            }
        }
        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {

                temp.push_back(nums[j]);
                j++;
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
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
        return count;
    }
    int m_sort(vector<int>& nums, int low, int high) {
        int count =0 ;
        if (low >= high)
            return count;
        int mid = (low + high) / 2;

        count+=m_sort(nums, low, mid);
        count+=m_sort(nums, mid + 1, high);
        count+=merge(nums, low, mid, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        // m_sort(nums, 0, nums.size() - 1);

        return m_sort(nums, 0, nums.size() - 1);;
    }
};

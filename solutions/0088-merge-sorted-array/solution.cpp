class Solution {
private:
    void swapInd(vector<int>& nums1, int ind1, vector<int>& nums2, int ind2) {
        if (nums1[ind1] >= nums2[ind2]) {

            swap(nums1[ind1], nums2[ind2]);
        }
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int length = m + n;

        int gap = ceil(length + 1) / 2;

        int left = 0, right = gap;

        while (gap > 0) {
            cout << gap << " ";
            while (right < n + m) {

                // left and right in arr1

                if (left < m && right < m) {
                    swapInd(nums1, left, nums1, right);
                }

                // left and right are arr2

                else if (left >= m && right >= m) {

                    swapInd(nums2, left - m, nums2, right - m);

                }

                // left in arr1 and right in arr2

                else {
                    swapInd(nums1, left, nums2, right - m);
                }
                left++;

                right++;
            }
            if (gap == 1)
                break;
            gap = ceil(gap + 1) / 2;

            left = 0, right = gap;
        }

        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[i - m];
        }
    }
};


class Solution {
private:
    double median(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int total = m+n;
        int pos1 = (total) / 2;
        int pos2 = (total - 1)/2;
        int count = 0;
        int ans1 = -1, ans2 = -1;
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {

                if (count == pos1) {
                    ans1 = nums1[i];
                }
                if (count == pos2) {
                    ans2 = nums1[i];
                }
                count++;
                i++;
            } else {

                if (count == pos1) {
                    ans1 = nums2[j];
                }
                if (count == pos2) {
                    ans2 = nums2[j];
                }
                count++;
                j++;
            }
        }
        while (i < m) {

            if (count == pos1) {
                ans1 = nums1[i];
            }
            if (count == pos2) {
                ans2 = nums1[i];
            }
            count++;
            i++;
        }
        while (j < n) {

            if (count == pos1) {
                ans1 = nums2[j];
            }
            if (count == pos2) {
                ans2 = nums2[j];
            }
            count++;
            j++;
        }
        double ans = (double)(ans1+ans2)/2;
        return ans;
    }

public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        return median(nums1,nums2);
        return 0;
    }
};

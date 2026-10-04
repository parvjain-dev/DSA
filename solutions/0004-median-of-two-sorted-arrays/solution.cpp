class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int low = 0, high = nums1.size();

        int ans1 = -1, ans2 = -1;
        int total = nums1.size() + nums2.size();

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int j = ((total + 1) / 2) - mid;
            // all number from nums2
            int left1 = INT_MIN, left2 = INT_MIN;
            int right1 = INT_MAX, right2 = INT_MAX;

            if (mid < nums1.size())
                right1 = nums1[mid];
            if (j < nums2.size())
                right2 = nums2[j];
            if (mid - 1 >= 0)
                left1 = nums1[mid - 1];
            if (j - 1 >= 0)
                left2 = nums2[j - 1];
            if (left1 > right2) {
                high = mid - 1;
            } else if (left2 > right1) {
                low = mid + 1;
            } else {
                if(total%2==1) return max(left1,left2);
                return ((double)(max(left1,left2)+min(right1,right2)))/2.0;
            }
        }
        
        return 0;
    }
};

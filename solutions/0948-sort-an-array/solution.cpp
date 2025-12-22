class Solution {
public:
    void merge(vector<int>& v, int low, int mid, int high) {
        int i = low;
        int j = mid + 1;
        vector<int> temp;

        while (i <= mid && j <= high) {
            if (v[i] < v[j]) {
                temp.push_back(v[i]);
                i++;
            } else {
                temp.push_back(v[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(v[i]);
            i++;
        }
        while (j <= high) {
            temp.push_back(v[j]);
            j++;
        }

        for (int k = low; k <= high; k++) {
            v[k] = temp[k - low];
        }
    }
    void mergeSort(vector<int>& v, int low, int high) {
        if (low >= high )
            return;
        int mid = (low + high) / 2;
        // cout<<low<<" "<<mid<<" "<<mid+1<<" "<<high<<" "<<endl;
        mergeSort(v, low, mid);
        mergeSort(v, mid + 1, high);

        merge(v, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {

        
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};

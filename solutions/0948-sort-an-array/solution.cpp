class Solution {
public:
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int pivot = arr[low];
        while (i < j)
        {
            while (i <high && arr[i] <= pivot)
            {
                i++;
            }
            while (j > low && arr[j] > pivot)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        int partition = j;
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
};

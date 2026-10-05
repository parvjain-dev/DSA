class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(k<arr[0]) return k;
        int low = 0,  high = arr.size()-1;
        int pos=-1;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(arr[mid]-(mid+1) <k){
                low= mid+1;
            }else{
                pos= mid;
                high = mid-1;
            }
        }
        cout<<high<<" "<<pos;
        int missing = arr[high]- (high+1);
        int req= k-missing;
        return arr[high]+req;
        // return 0;
        

    }
};

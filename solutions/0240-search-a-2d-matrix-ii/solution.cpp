class Solution {
private:
    int binaryS(vector<int> &v, int target){
        int left= 0, right = v.size()-1;
        while(left<= right){
            int mid = (left+right)/2;
            if(v[mid]<target){
                left = mid+1;
            }else if(v[mid]> target){
                right = mid-1;
            }else{
                return 1;
            }
        }
        return 0; 
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i =0; i< matrix.size(); i++){
            if(binaryS(matrix[i],target)) return true;
        }
        return false;
    }
};

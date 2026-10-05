class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxCount1=INT_MIN, ind=-1;
        for(int i =0; i< mat.size(); i++){
            int count1s =0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j]==1) count1s++;

            }
            if(count1s> maxCount1){
                maxCount1=count1s;
                ind= i;
            }
        }
        return {ind,maxCount1};
    }
};

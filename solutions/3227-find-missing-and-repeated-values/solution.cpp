class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long  len = grid.size()*grid.size();
        long long expSum = (len*(len+1))/2, expSqSum = (len*(len+1)*(2*len+1))/6;
        long long orgSum =0, orgSqSum =0;
        int count =0; 
       
        for(int i =0; i< grid.size(); i++){
            for(int j=0; j< grid[0].size();j++){
                orgSum+= (long long)grid[i][j];
                orgSqSum += (long long)grid[i][j] *(long long)grid[i][j];
            }
        }
        long long diff = orgSum - expSum;

        long long sqDiff = orgSqSum-expSqSum;
        sqDiff= sqDiff/diff;
         long long repNum = (diff+sqDiff)/2;
         long long missNum = sqDiff- repNum;

        return {(int)repNum,(int)missNum};
    }
};

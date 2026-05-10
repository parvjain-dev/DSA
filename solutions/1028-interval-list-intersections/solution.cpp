class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        if (firstList.size() < 1 || secondList.size() < 1)
            return res;
        int i = 0, j = 0;
        while (i < firstList.size() && j < secondList.size()) {
            if ((secondList[j][0] <= firstList[i][1] &&
                 secondList[j][0] >= firstList[i][0]) ||
                (firstList[i][0] <= secondList[j][1] &&
                 firstList[i][0] >= secondList[j][0])) {
                    vector<int> temp ={max(firstList[i][0], secondList[j][0]) , min(firstList[i][1], secondList[j][1])};
                    res.push_back(temp);
            }
            if(firstList[i][1]<secondList[j][1]){
                i++;
            }else{
                j++;
            }
        }

        return res;
    }
};

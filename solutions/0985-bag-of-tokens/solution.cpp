class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int token = 0;
        if (tokens.size() < 1)
            return 0;

        int i = 0, j = tokens.size() - 1;
        int maxi = 0;
        sort(tokens.begin(), tokens.end());
        while (i <= j) {
            cout <<  token <<" "<<maxi<< endl;
            if (tokens[i] <= power) {
                token++;
                power -= tokens[i];
                i++;
            } else if(token>0) {
                token--;
                power += tokens[j];

                j--;
            }else{
                break;
            }
            maxi = max(token, maxi);
        }
        return maxi;
    }
};

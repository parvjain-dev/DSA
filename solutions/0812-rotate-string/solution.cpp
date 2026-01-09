#include <algorithm>

class Solution {
public:
    void rotate(string &s){
        reverse(s.begin(), s.begin()+(1));
        reverse(s.begin()+1, s.end());
        // cout<<s;
        reverse(s.begin(),s.end());
    }
    bool rotateString(string s, string goal) {
        for(int i=0; i< goal.size(); i++){
            rotate(goal);
            if(goal == s){return true;}
        }
        return false;
    }
};

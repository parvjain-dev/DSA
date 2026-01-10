class Solution {
public:
    string largestEven(string s) {
        string res = "";
        int i = s.size() - 1;
        int index = 0;
        while (i > 0) {
            if (s[i] == '2') {

                index = i;
                break;
            }
            i--;
        }
        if(index==0 && s[0]=='1') return res;
        for (int j = 0; j <= index; j++) {
            res += s[j];
        }
        return res;
    }
};

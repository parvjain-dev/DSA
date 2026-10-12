class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string res = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                count++;
                if (count > 1) {
                    res += s[i];
                }
            } else {
                count--;
                if (count >= 1) {
                    res += ")";
                }
            }
        }
        return res;
    }
};

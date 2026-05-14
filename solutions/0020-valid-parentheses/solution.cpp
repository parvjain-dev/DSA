class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.size() < 2)
            return false;
        for (int i = 0; i < s.size(); i++) {
            if (!st.empty() && ((s[i] == ')' && st.top() == '(') ||
                                (s[i] == ']' && st.top() == '[') ||
                                (s[i] == '}' && st.top() == '{'))) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        if (st.empty())
            return true;

        return false;
    }
};

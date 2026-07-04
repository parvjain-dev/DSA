class Solution {
public:
    string filterEmails(string str) {
        string result = "";
        int i =0;
        for ( i = 0; i < str.size(); i++) {
            if (str[i] == '.') {
                continue;
            } else if (str[i] == '+' ||str[i]=='@') {
                while (str[i] != '@') {
                    i++;
                }
                break;
            } else {
                result += str[i];
            }
        }

        for (int j = i ; j < str.size(); j++) {
            result += str[j];
        }
        return result;
    }
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for (int i = 0; i < emails.size(); i++) {
            string res = filterEmails(emails[i]);
            cout << res<<endl;
            st.insert(res);
        }
        return st.size();
    }
};

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        unordered_map<char, int> window;
        string res = "";
        int i = 0;
        int len = INT_MAX;
        for (int k = 0; k < t.size(); k++) {
            freq[t[k]]++;
        }
        int required = freq.size();
        int formed = 0;
        int start =0;
        for (int j = 0; j < s.size(); j++) {
            window[s[j]]++;
            if (freq.count(s[j]) && window[s[j]] == freq[s[j]] ) {
                formed++;
            }

            while (formed == required) {
                if (len > j - i + 1) {
                    len= j-i+1;
                    start =i;
                }
                window[s[i]]--;
                if (freq.count(s[i]) && window[s[i]] < freq[s[i]]) {
                    formed--;
                }
                i++;
            }
        }
        res= s.substr(start, len);
        if(len == INT_MAX){
            return "";
        }else{
            return res;
        }
    }
};

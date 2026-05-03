class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        for (int k = 0; k < t.size(); k++) {
            need[t[k]]++;
        }

        int required = need.size();

        int formed = 0;
        int len = INT_MAX;
        string res = "";
        int i = 0;
        int start;
        unordered_map<char, int> freq;

        for (int j = 0; j < s.size(); j++) {
            freq[s[j]]++;
            if (need.count(s[j]) && freq[s[j]] == need[s[j]]) {
                formed++;
            }
            while (formed == required) {
                if (len > j - i + 1) {
                    len = j - i + 1;
                    start =i;
                }
                freq[s[i]]--;
                if(freq[s[i]]==0) freq.erase(s[i]);
                if (need.count(s[i]) && freq[s[i]] < need[s[i]]) {
                    formed--;
                }
                
                i++;
                
            }
         
        }
        if(len==INT_MAX) return "";
        res=s.substr(start, len);
        return res;
    }
};

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int formed = 0;
        unordered_map<char, int> need;
        unordered_map<char, int> freq;
        int k = p.size();
        for (int i = 0; i < k; i++) {
            need[p[i]]++;
        }
        int required = need.size();

        for (int i = 0; i < k; i++) {
            freq[s[i]]++;
            if (freq[s[i]] == need[s[i]]) {
                formed++;
            }
        }
        if (formed == required) {
            res.push_back(0);
        }

        for (int i = k; i < s.size(); i++) {
            if (need.count(s[i-k]) && freq[s[i - k]] == need[s[i - k]]) {
                formed--;
            }
            freq[s[i - k]]--;
            if (freq[s[i - k]] == 0)
                freq.erase(s[i - k]);
            freq[s[i]]++;
            if (need.count(s[i]) && freq[s[i]] == need[s[i]]) {
                formed++;
            }
            if (formed == required) {
                res.push_back(i - k + 1);
            }
        }
        return res;
    }
};

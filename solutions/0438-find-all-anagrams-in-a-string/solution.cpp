class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();

        unordered_map<int, int> need;
        unordered_map<int, int> freq;
        vector<int> res;
        for (int i = 0; i < k; i++) {
            need[p[i]]++;
        }
        int required = need.size();
        int formed = 0;
        for (int i = 0; i < k; i++) {
            freq[s[i]]++;
            if (need.count(s[i]) && freq[s[i]] == need[s[i]]) {
                formed++;
            }
        }
        if (required == formed)
            res.push_back(0);

        for (int i = k; i < s.size(); i++) {
            
            if (need.count(s[i-k]) &&freq[s[i - k]] == need[s[i - k]]) {
                formed--;
            }
            freq[s[i - k]]--;
            freq[s[i]]++;
            if (need.count(s[i]) && freq[s[i]] == need[s[i]]) {
                formed++;
            }
            if (required == formed)
                res.push_back(i - k + 1);
        }
        return res;
    }
};

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();

        unordered_map<char, int> need;
        unordered_map<char, int> freq;
        for (int i = 0; i < k; i++) {
            need[p[i]]++;
        }
        int required = need.size();
        vector<int> res;
        int formed = 0;
        for (int i = 0; i < k; i++) {
            freq[s[i]]++;
            if (need.count(s[i]) && need[s[i]] == freq[s[i]]) {
                formed++;
            }
        }
        if (required == formed) {
            res.push_back(0);
        }
        for (int j = k; j < s.size(); j++) {
            if (need.count(s[j - k]) && freq[s[j - k]] == need[s[j - k]]) {
                formed--;
            }
            freq[s[j - k]]--;
            if(freq[s[j - k]]==0){
                freq.erase(s[j-k]);
            }
            freq[s[j]]++;
            if (need.count(s[j]) && need[s[j]] == freq[s[j]]) {
                formed++;
            }
            if (required == formed) {
                res.push_back(j-k+1);
            }
        }
        return res;
    }
};

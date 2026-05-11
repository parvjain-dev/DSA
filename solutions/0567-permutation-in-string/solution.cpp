class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;
        int k = s1.size();
        unordered_map<char, int> need;
        for (int i = 0; i < k; i++) {
            need[s1[i]]++;
        }
        int required = need.size();
        unordered_map<char, int> freq;
        int formed = 0;
        for (int i = 0; i < k; i++) {
            freq[s2[i]]++;
            if (need.count(s2[i]) && freq[s2[i]] == need[s2[i]]) {
                formed++;
            }
        }
        if (formed == required)
            return true;

        for (int j = k; j < s2.size(); j++) {
            if (need.count(s2[j - k])&&need[s2[j - k]] == freq[s2[j - k]]) {
                formed--;
            }
            freq[s2[j - k]]--;
            if (freq[s2[j - k]] == 0)
                freq.erase(s2[j - k]);
            freq[s2[j]]++;
            if (need.count(s2[j]) && freq[s2[j]] == need[s2[j]]) {
                formed++;
            }
            if (formed == required)
                return true;
        }
        return false;
    }
};

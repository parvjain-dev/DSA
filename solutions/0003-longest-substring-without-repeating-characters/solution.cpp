class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        unordered_map<char, int> mp;
        int sum = 0, maxi = 0;
        for (int j = 0; j < s.size(); j++) {

            mp[s[j]]++;
            sum++;
            cout << sum << " ";
            while (mp.size() < j - i + 1) {

                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                sum--;
                i++;
            }
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};

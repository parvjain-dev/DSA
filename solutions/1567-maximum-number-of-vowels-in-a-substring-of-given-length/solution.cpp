class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'u'||c=='o';
    }
    int maxVowels(string s, int k) {
        int i = 0;
        int ans = 0, maxi = 0;
        for (int j = 0; j < s.size(); j++) {

            if (isVowel(s[j]))
                ans++;
            if (j - i + 1 > k) {
                if (isVowel(s[i])) {
                    ans--;
                }
                i++;
            }
            if (j - i + 1 == k) {
                maxi = max(ans, maxi);
            }
        }
        return maxi;
    }
};

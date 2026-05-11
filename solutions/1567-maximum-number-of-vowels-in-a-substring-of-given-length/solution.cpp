class Solution {
public:
    bool isVowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                count++;
        }
        int ans = count;
        for (int j = k; j < s.size(); j++) {
            if (isVowel(s[j - k]))
                count--;
            if (isVowel(s[j]))
                count++;

            ans = max(ans, count);
        }
        return ans;
    }
};

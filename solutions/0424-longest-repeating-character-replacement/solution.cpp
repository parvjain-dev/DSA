class Solution {
public:
    int characterReplacement(string s, int k) {
        int arr[128] = {0};

        // maxfreq-windowsize > k
        int i = 0;
        int maxFreq = INT_MIN;
        int ans = INT_MIN;
        for (int j = 0; j < s.size(); j++) {
            arr[s[j]]++;
            maxFreq = max(maxFreq, arr[s[j]]);

            while ((j - i + 1) - maxFreq > k) {
                arr[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};

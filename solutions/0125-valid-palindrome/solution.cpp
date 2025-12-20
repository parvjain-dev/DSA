class Solution {
public:
    void stringModifier(string &s){
        for(int i =0; i< s.size(); i++){
            s[i] = tolower(s[i]);
        }
        s.erase(remove_if(s.begin(),s.end(),[](unsigned char c){
            return !isalnum(c);
        }),s.end());
    }
    void revString(string& temp, int low, int high) {
        if (low >= high)
            return;
        swap(temp[low], temp[high]);
        revString(temp, low + 1, high - 1);
    }
    bool isPalindrome(string s) {
        stringModifier(s);
        string temp = s;
        revString(temp, 0, temp.size() - 1);
        if (temp == s)
            return true;
        return false;
    }
};

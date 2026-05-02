class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        string temp="";
        for(int i =0; i<strs.size(); i++){
            temp = strs[i];
            sort(temp.begin(), temp.end());

            mp[temp].push_back(strs[i]);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};

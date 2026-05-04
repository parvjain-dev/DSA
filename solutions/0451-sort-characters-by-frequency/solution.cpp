class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string res="";
        for(int i =0; i< s.size(); i++){
            mp[s[i]]++;
        }
        int len =s.size();
        vector<vector<char>> bucket(len+1);

        for(auto it:mp){
            bucket[it.second].push_back(it.first);
        }
        for(int i =len; i >=0; i--){
            for(char c : bucket[i]){
                res.append(i,c);
            }
        }
        return res;
    }
};

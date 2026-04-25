class Solution {
public:
    // int max_frequency(vector<int> &v){
    //     int maxi=INT_MIN;
    //     for(int i=0; i<v.size(); i++){
    //         maxi=max(maxi, v[i]);
    //     }
    //     return maxi;
    // }
    int characterReplacement(string s, int k) {
        vector<int> v(256, 0); 
        int i=0; 
        int res=0; 
        int max_freq=INT_MIN;
        for(int j=0; j<s.size(); j++){
            v[s[j]]++;
            // int max_freq= max_frequency(v);
            max_freq= max(max_freq, v[s[j]]);
            while(j-i+1-max_freq>k){
                v[s[i]]--;
                i++;
            }
            if(j-i+1-max_freq<=k ){
                res=max(res, j-i+1);
            }
        }
        return res;
    }
};

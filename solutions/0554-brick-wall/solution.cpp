class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int totalrows=wall.size();
        unordered_map<long long,int> mp;
        long long position=0;
        for(int i=0; i<wall.size(); i++ ){
            for(int j=0;j< wall[i].size()-1; j++){
                position += wall[i][j];
                mp[position]++;
            }
            position =0;
        }
        int maxi= 0;
        for(auto it:mp){
            maxi=max(maxi, it.second);
        }
        return totalrows- maxi;
    }
};

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        long long sum =0; 
        unordered_map<long long,int> mp;

        for(int i=0; i<wall.size(); i++){
            for(int j=0; j<wall[i].size()-1; j++){
                sum+=wall[i][j];
                mp[sum]++;

            }
            sum=0;
        }
        int maxi= 0;
        int ans=0;
        for(auto it :mp){
            if(maxi<it.second){
                maxi=it.second;
                ans= it.first;
            }
        }
        // cout<<maxi;
        return wall.size()-maxi;
    }
};

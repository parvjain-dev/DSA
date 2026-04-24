class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=0, sum=0;
        int i=0;
        unordered_map<int,int> mp;

        for(int j =0; j< fruits.size(); j++){
            mp[fruits[j]]++;
            sum++;;

            while(mp.size()>2){
                
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                sum--;
                i++;
            }
            // if(mp.size()==2){
                maxi=max(sum,maxi);
            // }
        }
        return maxi;
    }
};

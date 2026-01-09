class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256]={0};
        int maxi = INT_MIN;
        int count=0;
        if(s.size()<1) return 0;
        int i =0, j=0;
        while(j<s.size() ){
            if(arr[s[j]]==0){
                arr[s[j]]++;
                count++;
            }
            else{
                while(s[i]!=s[j]){
                    arr[s[i]]--;
                    i++;
                    count--;
                    
                }
                i++;
            }
            cout<<count<<" ";
            j++;
            maxi= max(maxi,count);
        }
        return maxi;

        return maxi;
    }
};

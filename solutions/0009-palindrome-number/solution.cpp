class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        int temp = x;
        long long revDig=0;
        while(temp>0){
            int i = temp%10;
            revDig= revDig*10 + i;
            temp = temp/10;
        }
        if (revDig > INT_MAX || revDig < INT_MIN) {
            return false; 
        }
        if((int)revDig == x) return true;
        return false;

    }
};

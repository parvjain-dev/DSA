class Solution {
public:
    int sumOfSquare(int n){
        int sum=0;
        while(n>0){
            int d = n%10;
            n=n/10;
            sum+= d*d;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow =n , fast=n;
        while(fast!=1){
            slow= sumOfSquare(slow);
            fast=sumOfSquare(fast);
            fast=sumOfSquare(fast);
            if(slow==fast && slow!=1){
                return false;
            }
        }
        return true;
    }
};

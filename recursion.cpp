#include<bits/stdc++.h>
using namespace std;


//Prints name n time. 

void printName(int n, string str){
    if (n == 0){
        return;
    }
    cout<<str<<endl;
    printName(n-1, str);

}

//print 1 to N lineraly 
 
void print1toN(int i ,int n){
    
    if (i>n)
    {
        return ;
    }
    cout<<i<<endl;
    
    print1toN(i+1,n);
    
}

void backTrackNto1(int i , int n){
    if (i>n)
    {
        return;
    }

    backTrackNto1(i+1, n);
    cout<<i<<endl;
}
int main(){
    //  printName(5, "Parv jain");

    // print1toN(1,5);

    backTrackNto1(1,5);
    return 0;
}
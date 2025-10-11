#include<bits/stdc++.h>
using namespace std;


void pattern1(int n ){
    for(int i = 0 ; i< n; i++){
        for (int  j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}

void print2(int n ){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
           cout<<"*-";
        }
        cout<<endl;
    }
    
}

void print3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<j+1<<"-";
        }
        cout<<endl;
    }
    
}

void print4(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<i+1 <<"-";
        }
        cout<<endl;
    }
    
}

void print5(int n ){
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j< i; j++)
        {
            cout<< "*-";
        }
        cout<<endl;
    }
    
}

void print6(int n ){
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 0; j< n-i+1; j++)
        {
            cout<< j+1 <<"-";
        }
        cout<<endl;
    }
    
}


void print7(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j<n-1; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*i +1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

void print8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<i; j++)
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*(n-i)-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

int main(){
    int n ;
   cout<<"Enter a number: ";
   cin>>n;
//    pattern1(n);
// print2(n);
// print3(n);

// print4(n);

// print5(n);

// print6(n);

// print7(n);
print8(n);
}
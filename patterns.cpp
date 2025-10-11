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


void print9 (int n ){
    //int i = 0; i < 2*n-1; i++ ?? i = 8 then stars = 2 not 1.
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if (i>n) {
            stars= 2*n -i;
        }
        
        for (int j = 0; j <stars; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// void print10(int n ){
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if ((i%2==0 && j%2==0)|| (i%2!=0 && j%2!=0) )
//             {

//                 cout<<1<<" ";
//             }else{
//                 cout<<0<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
    
// }

void print10Flip(int n){
    int start=1;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            start=1;
        }else{
            start =0;
        }
        for (int j = 0; j <=i; j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    
}

//last line is not printing
// void print11(int n){
//     for (int i = 0; i < n; i++)
//     {
//         for(int j =0; j<i ; j++){
//             cout<<j+1;
//         }
//         for (int k = 0; k< n+2*(1-i); k++)
//         {
//             cout<<" ";
//         }
//           for(int l =i; l>0 ; l--){
//             cout<<l;
//         }
//         cout<<endl;
//     }
    
// }

void print11(int n){
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        for(int j =1; j<=i ; j++){
            cout<<j;
        }
        for (int k = 1; k<= space; k++)
        {
            cout<<" ";
        }
          for(int l =i; l>=1 ; l--){
            cout<<l;
        }
        cout<<endl;
        space-=2;
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

//  print7(n);
// print8(n);
// print9(n);
// print10Flip(n);

print11(n);
}
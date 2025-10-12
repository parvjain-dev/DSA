#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*-";
        }
        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << "-";
        }
        cout << endl;
    }
}

void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << "-";
        }
        cout << endl;
    }
}

void print5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*-";
        }
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << j + 1 << "-";
        }
        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print9(int n)
{
    // int i = 0; i < 2*n-1; i++ ?? i = 8 then stars = 2 not 1.
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
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

void print10Flip(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

// last line is not printing
//  void print11(int n){
//      for (int i = 0; i < n; i++)
//      {
//          for(int j =0; j<i ; j++){
//              cout<<j+1;
//          }
//          for (int k = 0; k< n+2*(1-i); k++)
//          {
//              cout<<" ";
//          }
//            for(int l =i; l>0 ; l--){
//              cout<<l;
//          }
//          cout<<endl;
//      }

// }

void print11(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;
        space -= 2;
    }
}

void print12(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void print13(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        int ASCII = 65;
        for (int j = n - i; j > 0; j--)
        {
            cout << char(ASCII) << " ";
            ASCII++;
        }
        cout << endl;
    }
}

void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void print16(int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = (2 * i + 1) / 2;
        char ch = 'A';

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << ch;
            if (k <= num)
            {
                ch++;
            }
            else
            {

                ch--;
            }
        }

        for (int l = 0; l < n - i - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print17(int n ){
    char ch= 'E';
    for (int i = 0; i < n; i++)
    {
        ch = ch - i;
        for (int j = 0; j <= i; j++)
        {
          
            cout<<ch;
            ch++;
        }
        
        cout<<endl;
        ch = 'E';
    }
    
}



void print18(int n){
    for(int i =0; i<n ; i++){

        //stars
        for (int j = 0; j< n-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j <2*i; j++)
        {
            cout<<"-";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {

        // stars
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 8-2*i; j++)
        {
            cout << "-";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


void print19(int n){
    int space = (2*n-1)-1;
   
    for (int i = 1; i <=2*n-1 ; i++)
    {
        
        if (i> (2*n-1)/2)
        {
            for (int j = 0; j < 2*n-i; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < space; j++)
            {
                // cout << space;
                cout<<" ";
            }
            for (int j = 0; j < 2 * n - i; j++)
            {
                cout << "*";
            }
            cout<<endl;
            space = space+2;
        }
        else{
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < space; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            space = space - 2;

            cout << endl;
        }
     
    }
    
}


void print20(int n){
    for (int i = 1; i <=n; i++)
    {
        if (i==1 || i==n)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<"*";
            }
            
        }else{
            cout<<"*";
            for (int j = 0; j < n-2; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
}


void print21(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top= i;
            int left = j;
            int right = (2*n -2)-j;
            int down= (2*n-2)-i;
            cout<< (n-min(min(top,down), min(left,right)));
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
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

    // print11(n);

    print21(n);
}
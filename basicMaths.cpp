#include <bits/stdc++.h>

using namespace std;

int digitExtraction(int n ){
    int num =n ; 
    int temp ;
    list<int> v;
//time complexity log10(N) (division by n then logn(N))
    while (num>0)
    {
        temp = num % 10;
        v.push_front(temp);
        num =num/10;
        // cout<< num<<" ";

    }
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    
    return v.size();
}
int revNum(int n ){
    int revNum = 0;
    int lastDig;
    int check = 0;
    if (n<0)
    {
        n=n*-1;
        check++;
    }
    
    while (n!=0)
    {
        lastDig= n%10;
        n=n/10;
        revNum= revNum*10 + lastDig;
    }

    if (check)
    {
        return revNum*-1;
    }
    else{
       return revNum;
    }
    
}


//ARMSTRONG NUMBER
bool armStrong(int x){
    int dup = x;
    int res=0;
    while (x!=0)
    {
        int temp = x%10;
        res+= temp*temp*temp;
        x=x/10;
    }
    if(dup==res) return 1;
    return 0;
}


void printDivisor (int x){
    for (int i = 1; i <=x/2; i++)
    {
        if (x%i ==0)
        {
            cout<<i<<" ";
        }
        
    }
    cout<<x;
}

//more optimum 
void printDivisor2(int x){
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x%i ==0)
        {
            cout<<i <<endl;
            if ((x/i)!=i)
            {
            
                cout << x / i << endl;
            }

            
        }

        
    }
    
}

int gcd(int a, int b){
    int result = 1;
    for (int i = min(a, b); i>=1; i--)
    {
        if(a%i ==0 && b%i==0) {
           result =i;
           break;
        }
    }
    return result;
    
}

int eucledianGcd(int a, int b){
    while (a!=0)
    {
        if (a<b) swap(a,b);
        
        a=a%b;
    }
    return b;
}

int main(){
int n ;
// cout<<"Enter the number : ";
// cin>>n;

//    int ans= digitExtraction(n);
// int ans= revNum(n);
//     cout<<ans<<endl;
//     cout<<INT_MAX;

// bool ans = armStrong(n);
// cout<<ans<<endl;

// cout<<INT_MAX /2<<endl;

// printDivisor(INT_MAX-1);

// cout<<sqrt(10);
// printDivisor2(n);

// int gcdRes = gcd(40,20);

int gcdRes = eucledianGcd(3, 15);

cout<<gcdRes;
    return 0;
}
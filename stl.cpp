#include<bits/stdc++.h>
using namespace std;


void pairs(){
    pair<int,int> p={1,3};
    cout<<p.first<< " "<<p.second;
    cout<<endl;
    
    //nested pair
    pair<int, pair<int,int>> p1= {2,{4,5}};
    cout<<p1.first<<" "<<p1.second.second <<" "<<p1.second.first;
    cout << endl;

    //array of pair.
    pair<int,double> arr[] = {{1,2.3342},{4,1.2543}};
    cout<<arr[1].second<<" "<<arr[0].first;
    cout << endl;
}
int main(){

    pairs();
    return 0;
}
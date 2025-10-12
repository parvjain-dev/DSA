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

void vectorLearn(){
    vector<int> v;
    v.push_back(1); //insert value in vector. 
    v.emplace_back(2); //dynamically increase size and put 2 (FASTER THAN PUSHBACK)
    v.emplace_back(4);
    v.emplace_back(90);
    v.emplace_back(30);
    v.emplace_back(56);
    cout<<v[1];

    vector<pair<int,string>> pairDT;

    pairDT.push_back({23,"parv jain"});
    pairDT.emplace_back(24, "ansh Dhaiya");

    cout<<pairDT[1].second;

    vector <int> v3(5,100); //{100,100,100,100,100}

    vector<int> v4(5); //{0,0,0,0,0} or with any garbage value STILL IT IS EXPANDABLE 

    vector<int> v1(4,200);
    vector<int> v2(v1); //copy of v1 but another container. 

    cout<<endl;
    //iterator
    //these methods(begin, end, rend, rbegin are point to memory not value. use * to access them)
    vector<int>::iterator it = v.begin(); //points to first ele. 
    it++;
    cout<<*it<<" ";

    vector<int>::iterator it1 = v.end(); //point to next to last ele not last ele . 

    //these two never use, for knowledge 
    // vector<int>::reverse_iterator it2 = v.rend(); //points before first ele. 
    // vector<int>::reverse_iterator it3 = v.rbegin();// points last ele. it3++ it will move to last second ele. 

    cout << endl;
    // cout<<*v.begin()<<"*"<<endl;
    // cout << *v.rend() << "&" << endl;
    // cout << *v.rbegin() << "%" << endl;

    // cout<<v.back()<<endl; //gives last ele, .

    //first way
    for (vector<int>::iterator it = v.begin(); it!= v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout << endl;
    //second way
    for (auto it = v.begin(); it !=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    //third way foreach
    //"it" is not a iterator its int. 
    for(auto it:v){
        cout<<it<<" ";
    }
    cout << endl;

    //deletion 
    // v.erase(v.end()-1); //erase takes iterator not value. so, give iterator.
    // v.erase(v.begin());

    // v.erase(v.begin()+2,v.begin()+4); //giving range  erase(start,end] start address from element to delete and end address after the element address you want to delete.
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }


//insert function 
vector<int> ins(2,100); //{100,100}
// ins.insert(ins.begin()+1,300); //{100,300,100}

// ins.insert(ins.begin() + 1,3, 2); //{100,2,2,2,100}

// vector<int> copy(3,3);
// ins.insert(ins.end(),copy.begin(),copy.end()); 

// for (auto it : ins)
// {
//     cout << it << " ";
// }

// cout<<ins.size(); //2

// ins.clear();
// for (auto it : ins)
// {
//     cout << it << " ";
// }

// ins.pop_back(); //remvoe the first element. 

// ins.swap(v); //just swap the contents. 

// v.empty(); //tells does your vector empty.

}


void listLearn(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front();

    //rest functions are same as vector 
    //begin, end, rbegin, rend, clear, insert, size, swap
}

int main(){

    // pairs();

    vectorLearn();
    return 0;
}
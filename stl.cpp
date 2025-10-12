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


void deqeueueLearn(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);

    dq.push_front(3);
    dq.emplace_front(67);

    // dq.pop_back();
    // dq.pop_front();

    // cout<<dq.back();
    // cout<<dq.front();

    // for(auto it: dq){
    //     cout<<it<<" ";
    // }

    //rest functions as same as vector .
}

void stackTutorial(){
    //LAST IN FIRST OUT. 
//ALL THE OPERATIONS ARE O(1) OPS. 
    stack<char> st;
    st.emplace('p');
    st.push('a');
    st.emplace('r');
    st.emplace('v');


    // st.pop();
   cout<<st.top()<<endl;
   cout<<st.size()<<endl;
    cout<<st.empty();
   //st1.swap(st2);
}


void queueLearn(){
    //FIRST IN FIRST OUT
//O(1)
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(14);
    q.emplace(15);
    cout << q.back() << endl;
    q.back()+=5;

    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();

    cout<<q.front()<<endl;
}


void priorityq(){
    //largest value stays at the top. (max heap)
    priority_queue<int> pq; 

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(6);//{6,5,2}
    pq.emplace(10); //{10,6,5,2}

    cout<<pq.top()<<endl;

    //minimum value at the top (min heap)
    priority_queue<int, vector<int>, greater<int>> pqmin;

    pqmin.push(5);
    pqmin.push(2);
    pqmin.push(10);
    cout<<pqmin.top()<<endl;
}


void setLearn(){
    //STORES EVERYTHING IN SORTED ORDER AND UNIQUE . 
    //tree is maintained not a linear container
    set<int>st;
    st.insert(1);
    st.insert(32);
    st.insert(-3);
    st.insert(14);
    st.insert(14);//will not store this as it is already present
    st.insert(20);

    //begin() , end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

    auto it= st.find(3); //if element is not present in the set it points to next to last ele. 
    // cout<<*it<<endl;

    auto it2 = st.find(14); 
    // cout << *it2 << endl;

    // st.erase(-3); //erase 5 takes log time. 

    int cnt= st.count(14);
    // cout<<cnt<<endl;

    //ERASE TAKES BOTH ELEMENT TO ERASE AND ITERATOR AS WELL. 
    auto it = st.find(32);
    st.erase(it); //constant time. 

    //ERASE ALSO TAKES START TO END RANGE. 
}


void multisetLearn(){
//EVERYTHING SAME AS SET BUT ALSO STORE DUPLICATE VALUES. 

multiset<int> ml;
ml.insert(12);
ml.insert(12);
ml.insert(1);
ml.insert(89);
ml.insert(50);

ml.erase(12); //ALL 12 ARE ERASED. 

int cnt= ml.count(12);

ml.erase(ml.find(12)); //erase only one 12

ml.erase(ml.find(12),ml.find(50) );

// erase that element and the next one:
auto it = ml.find(12);
if (it != ml.end())
{
    auto next_it = it;
    ++next_it;             // move iterator forward by one
    ml.erase(it, next_it); // erase range [it, next_it)
}
//rest all the functions are same. 

}

void unorderedSet()
{
    //O(1) IN MOST OF THE CASES [WORST CASE (DOES NOT HAPPEN) O(N)]
    //store unique but does not store in sorted order. random order.
    unordered_set<int> set;

    set.insert(12);
    set.insert(143);
    set.insert(10);
    set.insert(18);
    set.insert(20);

}
int main(){

    // pairs();

    // vectorLearn();

    // deqeueueLearn();

    // stackTutorial();

    // queueLearn();

    // priorityq();
    
    // setLearn();


    return 0;
}
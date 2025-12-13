#include<bits/stdc++.h>
using namespace std;
int main(){
    // priority_queue<int> pq; //max-heap
    // pq.push(10);
    // pq.push(5);
    // pq.push(-4);
    // pq.push(81);
    // cout<<pq.top()<<endl; //81
    // pq.pop(); //81 is removed
    // cout<<pq.top(); //10 

    priority_queue<int , vector<int> , greater<int>> pq; //min-heap
    pq.push(10);
    pq.push(5);
    pq.push(-4);
    pq.push(81);
    cout<<pq.top()<<endl; //-4
    pq.pop(); //-4 is removed
    cout<<pq.top(); //5 
}
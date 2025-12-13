#include<iostream>
#include<set>
#include<map>
using namespace std;

//ascending order me humesha element deta hai
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(4); //log n time leta hai

    // for(int ele : s){
    //     cout<<ele<<" ";
    // }

    map<int, int> mp;
    mp[2] = 30;
    mp[3] = 10;
    mp[1] = 20;

    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
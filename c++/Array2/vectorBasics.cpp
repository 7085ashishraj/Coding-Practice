#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // U need not mention the size

    //inserting / input do not use[]

    v.push_back(6);
    //cout<<v.size()<<endl;
    cout<<v.capacity();
    //v[1] = 1; // not technically right way to do -> iss tarah se ye check nhi karta ki size full hai ya nhi hai aur fir oosko double nhi karta
    
    v.push_back(1);
    //cout<<v.size()<<endl;
    cout<<v.capacity();
    v.push_back(9);
    //cout<<v.size()<<endl;
    cout<<v.capacity();
    v.push_back(0);
    //cout<<v.size()<<endl;
    cout<<v.capacity();
    

    // if you want to update / access
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";

}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        swap(v[i++],v[j--]);
    }
}
int main(){
    int n;
    cout<<"Size of array: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    //reverse(v.begin(),v.end());
    display(v);
    reversePart(1,4,v);
    display(v);
}
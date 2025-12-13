#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    //display(v);
    sort(v);
    display(v);
    
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    // int q;
    // cin>>q;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort(v.begin(),v.end());
    //int i=0;
    //int j=1;
    bool foundDuplicate = false;
    for(int i=0; i<v.size()-1; i++){
        //if(foundDuplicate) break;
        for(int j=i+1; j<v.size(); j++){
            if(v[i]==v[j]){
                foundDuplicate = true;
                cout<<"True";
                break;
            }
        }
    }
    if (!foundDuplicate) cout<<"false";
}
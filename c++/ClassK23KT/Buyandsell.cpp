#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q); // 7 1 5 3 6 4
    }
    int buy = -1;
    int buyIndex = -1;
    int sell = -1;
    for(int i=0;i<n;i++){
        if(v[i]>v[i+1]){
            continue;
        }
        else{
            buy = v[i];
            buyIndex = i;
            break;
        }
    }
    sort(v.begin()+buyIndex,v.end());
    for(int i=buyIndex;i<n;i++){
        sell = v[n-1];
    }
    cout<<"Profit = "<<sell - buy;
}
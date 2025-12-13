#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int>v(4,2); //2 2 2 2

    vector<vector<int> > v(4,vector<int> (4,2)); // 2 2 2 2
    //cout<<v.size();
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
}
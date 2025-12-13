#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    // 2n-1 stars
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m = n-1; // new lines
    int nsp = 1;
    for(int i=1;i<=m;i++){
        //stars
        for(int j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        //stars
        for(int j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
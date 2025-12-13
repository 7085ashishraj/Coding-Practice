#include<iostream>
using namespace std;

// or just write fibbonacci number code......

int stair(int n){
    if(n==1 || n==2) return 1;
    return stair(n-1) + stair(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<stair(n);
}
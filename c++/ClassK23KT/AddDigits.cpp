#include<bits/stdc++.h>
using namespace std;

int rec(int n){
    int sum = 0;
    if(n<10) return n; 
    while(n>0){
        int x = n % 10;
        sum += x;
        n/=10;
    }
    return rec(sum);
    
}

int main(){
    int n ;
    cin>>n;
    cout<<rec(n);
}
#include<bits/stdc++.h>
using namespace std;

bool gold(int n, int m){
    if(n==m) return true;
    if(n%3!=0) return false;
    if(n<2) return false;
    //breaking into two parts
    bool left = gold(n/3, m);
    bool right = gold(2*n/3, m);
    return left || right;
}

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, m;
        cin>>n>>m;
        if(gold(n,m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}
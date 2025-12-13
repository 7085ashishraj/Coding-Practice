#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int iCj = fact(n)/(fact(r)*fact(n-r));
    return iCj;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" "; //icj
        }
        cout<<endl;
    }
}
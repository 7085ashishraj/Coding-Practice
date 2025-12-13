#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    //1 2 4 8 16 ......n terms
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a = a *2;
    }
}
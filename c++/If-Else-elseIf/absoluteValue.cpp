#include<iostream>
using namespace std;
int main(){
    cout<<"Enter integer: ";
    int n;
    cin>>n;
    int z = n - 2*n;
    if(n<0){
        cout<<z<<endl;
    }
    else{
        cout<<n;
    }
}
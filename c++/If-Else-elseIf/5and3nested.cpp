#include<iostream>
using namespace std;
int main(){
    cout<<"Enter integer: ";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Divisible by 5 and 3";
        }
    }
    else{
        cout<<"not matching conditions";
    }
}
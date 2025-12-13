#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a inetger: ";
    int n;
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three digit number";
    }
    else{
        cout<<"Not 3 digit number";
    }
}
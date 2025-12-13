#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a inetger: ";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"divisible";
    }
    else{
        cout<<"not divisible";
    }
}
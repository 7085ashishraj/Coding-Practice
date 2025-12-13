#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    if (a>b && a>c){
        cout<<"a is greatest";
    }
    else if(b>a && b>c){
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
}
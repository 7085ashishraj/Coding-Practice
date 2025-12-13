#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    starTriangle(3);
    //cout<<"Hello world";
    starTriangle(4);
    //cout<<"Hello";
    starTriangle(5);
    //we can write anything here but with loop the whole loop will run combinely.
}
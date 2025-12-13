#include<iostream>
using namespace std;
int main(){
    // int x = 8;
    // int y = 7;
    // int* p1 = &x;
    // int* p2 = &y;
    // cout<<*p1+ *p2;

    int x , y;
    int* p1 = &x;
    int* p2 = &y;
    //pointer ke case me seperate line me hi pointer ko declare karna;
    cout<<"Enter first number: ";
    cin>>*p1;
    cout<<"Enter second number: ";
    cin>>*p2;
    //cout<< *p1 + *p2;
    cout<< x + y;
}
#include<iostream>
using namespace std;
int main(){
    // int x;
    // cin>>x;
    // int y;
    // cin>>y;
    // int *ptr1 = &x;
    // int *ptr2 = &y;
    // cout<<(*ptr1)*(*ptr2);
    int a = 10, b = 20;
    int *ptr = &a;
    b = *ptr + 1;
    ptr = &b;
    cout<<*ptr<<' '<<a<<' '<<b;
}
#include<iostream>
using namespace std;
int main(){
    // int x = 5;
    // int *ptr = &x;
    // cout<<ptr<<endl; //0x61ff08
    // ptr++;
    // cout<<ptr; //0x61ff0c
    bool flag = true;
    bool *ptr = &flag;
    cout<<ptr<<endl;// 0x61ff0b
    *ptr = *ptr + 1;//(*ptr)++; aise v likh sakte hai!!
    cout<<ptr<<endl; //0x61ff0c
}
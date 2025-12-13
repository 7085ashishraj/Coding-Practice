// #include<iostream>
// using namespace std;
// int main(){
//     int x = 8;
//     int* p = &x;
//     cout<<*p;
// }

#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* p = &x;
    cout<<x<<endl;
    *p = 9;
    cout<<x;
}
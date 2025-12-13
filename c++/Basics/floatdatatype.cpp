// #include<iostream>
// using namespace std;
// int main(){
//     // float x = 3.1415;
//     // cout<<x;
//     float x = 5;
//     float y = 2;
//     cout<< x/y <<endl;
// }

//Take two integers input a and b: a>b, find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main(){
    int a = 19;
    int b = 4;
    //cout<< a%b <<endl;
    int c = a/b;
    int d = a - (b*c);
    cout<< d << endl;
}
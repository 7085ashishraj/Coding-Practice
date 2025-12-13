// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Good Morning"<<endl;
//     cout<<"How are you?"<<endl;
// }

// int product(int a,int b){
//     return a*b;
// }
// int main(){
//     //greet();
//     //cout<<product(5,6);
//     int a = 6;
//     int b = 8;
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);              //c++ has built-in function which is good in use
//     cout<<a<<" "<<b<<endl;
// }


// #include<iostream>
// using namespace std;

// void gun(){
//     return;   // mtlb fxn khatam kar do iske neeche kuchh v likha ho it is useless
//     cout<<"Hello CW"<<endl;
// }

// void fun(){
//     cout<<"Hello PW"<<endl;
//     gun();
//     return;
// }
// int main(){
//     fun();
// }


// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return;
//         cout<<"Hello world"<<endl;
//         fun(n-1);
// }

// int main(){
//     fun(3);
// }

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    fun(n-1);
}
int main(){
    int n;
    cin>>n;
    fun(n);
}
// #include<iostream>
// using namespace std;

// int power(int a, int b){
//     if(a==0 && b==0){
//         cout<< "0 raised to the power 0 is not defined";
//     }
//     if(a==0) return 0;
//     int p = 1;
//     for(int i=1;i<=b;i++){
//         p *= a;
//     }
//     return p;
// }

// int main(){
//     cout<<power(2,3);
// }

#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    return a * power(a,b-1);
}

int main(){
    cout<<power(2,3);
}
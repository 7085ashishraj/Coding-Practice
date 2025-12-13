// #include<iostream>
// using namespace std;

// void factorial(int n){
//     int pdt = 1;
//     for(int i=1;i<=n;i++){
//     pdt *= i;
//     cout<<pdt<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     factorial(n);
// }

#include<iostream>
using namespace std;

int fact(int n){
    //Base case
    if(n==0 || n==1) return 1;
    //recursive call
    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}

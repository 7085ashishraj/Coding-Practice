#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int reversed_no = 0;
    while(n>0){
        int digit = n%10;
        reversed_no = reversed_no * 10 + digit;
        n/=10;
    }
    cout<<reversed_no<<endl;
}
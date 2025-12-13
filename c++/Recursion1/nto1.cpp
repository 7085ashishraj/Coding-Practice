#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return; //base case
    cout<<n<<" "; //kaam
    print(n-1); //call
}

int main(){
    int n;
    cin>>n;
    print(n);
}
#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==1) return a;
    if(b%2==0){
        int ans = pow(a,b/2);
        return ans * ans;
    }
    else if (b%2!=0){
        int ans = pow(a,b/2);
        return ans * ans * a;
    }
    
}

int main(){
    cout<<pow(2,3);
}
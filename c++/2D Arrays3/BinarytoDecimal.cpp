#include<iostream>
using namespace std;

void input_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void output_array(int arr[],int n){
    int sum = 0;
    int x = 1;
    for(int i=n-1;i>=0;i--){
        sum += arr[i]*x;
        x*=2;
    }
    cout<<sum;
}
int main(){
    int n;
    int arr[n];
    input_array(arr,n);
    output_array(arr,n);
}
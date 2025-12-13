#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    outputarray(arr,n);
}
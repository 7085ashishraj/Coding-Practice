#include<iostream>
using namespace std;
void inputarray(int arr[], int n){
    cout<<"Input array: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
}
}
void printarray(int arr[], int n){
    cout<<"Printing array: ";
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter no. of students: ";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    printarray(arr,n);
}
#include<iostream>
#include<climits>
using namespace std;
void inputarray(int arr[], int n){
    cout<<"Enter elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(mini>arr[i]){
            mini = arr[i];
        }
       // cout<<maxi;
    }
    cout<<mini;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    outputarray(arr,n);
}
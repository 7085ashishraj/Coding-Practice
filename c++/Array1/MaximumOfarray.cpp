#include<iostream>
#include <climits>
using namespace std;
void inputarray(int arr[], int n){
    cout<<"Enter elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi = arr[i];
        }
       // cout<<maxi;
    }
    cout<<maxi;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    //int max = arr[0];
    inputarray(arr,n);
    outputarray(arr,n);
}
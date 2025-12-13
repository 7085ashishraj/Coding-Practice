//Merge two sorted arrays using loops

#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[m+n];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m && j<n){
        if(arr[i]<arr1[j]){
            arr2[k++] = arr[i++];
        }
        else{
            arr2[k++] = arr1[j++];
        }
    }
    // Copy remaining elements
    while(i<m){
        arr2[k++] = arr[i++];
    }
    while(j<n){
        arr2[k++] = arr1[j++];
    }

    // Print merged array
    for(int x=0;x<m+n;x++){
        cout<<arr2[x]<<" ";
    }
}
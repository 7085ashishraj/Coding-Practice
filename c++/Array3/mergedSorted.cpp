#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[],int n){
    cout<<"Printing the sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void mergedarray(int arr1[],int arr2[],int m,int n,int arr3[]){
    int i = 0;
    int j= 0;
    int k = 0;
    while(i<n && j<m){
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main(){
    int n;
    cout<<"Enter size of array1: ";
    cin>>n;
    int arr1[n];
    inputarray(arr1,n);
    //outputarray(arr1,n);
    int m;
    cout<<"Enter the size of array2: ";
    cin>>m;
    int arr2[m];
    inputarray(arr2,m);
    //outputarray(arr2,m);
    int arr3[n+m];
    mergedarray(arr1,arr2,m,n,arr3);
    outputarray(arr3,n+m);

}
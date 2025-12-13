//Amazon Microsoft
#include<iostream>
using namespace std;

void Takeinput(int arr[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void outputarray(int arr[],int n){
    cout<<"Print elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done"<<endl;
}

void rotatearray(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    Takeinput(arr,n);
    outputarray(arr,n);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    rotatearray(arr,n,k);
    outputarray(arr,n);
}
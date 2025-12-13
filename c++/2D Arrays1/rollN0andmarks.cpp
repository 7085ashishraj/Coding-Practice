#include<iostream>
using namespace std;

void inputarray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
}

void outputarray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m;
    cout<<"Enter roll.no: ";
    cin>>m;
    int n;
    cout<<"Enter no.of students: ";
    cin>>n;
    int arr[100][100];
    inputarray(arr,m,n);
    outputarray(arr,m,n);
}
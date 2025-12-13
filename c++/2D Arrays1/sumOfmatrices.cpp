#include<iostream>
using namespace std;

void inputarray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}

void outputarray(int arr1[][100],int arr2[][100],int m,int n,int res_arr[][100]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res_arr[i][j] = arr1[i][j] + arr2[i][j];
            cout<<res_arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m;
    cout<<"Enter no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int arr1[100][100];
    int arr2[100][100];
    int res_arr[100][100];
    inputarray(arr1,m,n);
    inputarray(arr2,m,n);
    outputarray(arr1,arr2,m,n,res_arr);
}
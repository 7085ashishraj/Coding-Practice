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
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}

int main(){
    int m;
    cout<<"Enter no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns: ";
    cin>>n;
    int arr[100][100];
    inputarray(arr,m,n);
    outputarray(arr,m,n);
}
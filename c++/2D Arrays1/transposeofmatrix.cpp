#include<iostream>
using namespace std;

void inputarray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}

// void outputarray(int arr[][100],int m,int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

void store_transpose(int arr[][100],int t[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j] = arr[j][i];
        }
    }
}

void output_transpose(int t[][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
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
    int arr[100][100];
    int t[100][100];
    inputarray(arr,m,n);
    //outputarray(arr,m,n);
    store_transpose(arr,t,n,m);
    output_transpose(t,n,m);
}
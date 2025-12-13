#include<iostream>
using namespace std;

void input_matrix(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
}

void output_matrix(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){ //agar oolta karna hai then i=m-1 se i>=0 i--
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
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
    input_matrix(arr,m,n);
    output_matrix(arr,m,n);
}
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
    for(int j=0;j<n;j++){ //agar oolta karna hai then i=m-1 se i>=0 i--
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
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
#include<iostream>
using namespace std;

void inputarray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}

void outputarray(int arr[][100],int m,int n){
    //int sun = 0;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<"SUM: "<<sum<<endl;
    }
    //cout<<sum;
}
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[100][100];
    inputarray(arr,m,n);
    outputarray(arr,m,n);

}
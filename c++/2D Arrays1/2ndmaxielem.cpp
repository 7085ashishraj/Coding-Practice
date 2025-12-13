#include<iostream>
#include<climits>
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
    int maxi = INT_MIN;
    int sec_maxi = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(maxi<arr[i][j]){
                maxi = arr[i][j];
            }
        }
    }
    cout<<"Maximum element is: "<<maxi<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>sec_maxi&& arr[i][j]!=maxi){
                sec_maxi = arr[i][j];
            }
        }
    }
    cout<<"Second maximum element is: "<<sec_maxi;
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
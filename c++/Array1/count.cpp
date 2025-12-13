#include<iostream>
using namespace std;
void inputarray(int arr[],int n,int x){
    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[], int n,int x){
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
        //cout<<count;
    }
    cout<<count;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int arr[n];
    inputarray(arr,n,x);
    outputarray(arr,n,x);
}
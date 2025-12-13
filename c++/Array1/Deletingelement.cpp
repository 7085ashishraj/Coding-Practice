#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void printarray(int arr[],int n){
    cout<<" Formed Array: ";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void delete_elem(int arr[],int n,int p){
    for(int i=p;i<n-1;i++){
        arr[i] = arr[i+1];
    }
}
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int p;
    cout<<"Enter position of element where u want to place: ";
    cin>>p;
    // int k;
    // cout<<"Enter element u want to place: ";
    // cin>>k;
    int arr[n];
    inputarray(arr,n);
    //printarray(arr,n);
    delete_elem(arr,n,p);
    printarray(arr,n);

}
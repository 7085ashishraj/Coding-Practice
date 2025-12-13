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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion(int arr[],int n,int p,int k){
    for(int i=n;i>=p-1;i--){
        arr[i+1] = arr[i];
    }
    arr[p-1] = k;
    //arr[k]=arr[p-1];
}
// void newarray(int arr[],int n,int p,int k ){
//     arr[p-1] = arr[k];
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int p;
    cout<<"Enter position of element where u want to place: ";
    cin>>p;
    int k;
    cout<<"Enter element u want to place: ";
    cin>>k;
    int arr[n];
    inputarray(arr,n);
    printarray(arr,n);
    insertion(arr,n,p,k);
    //newarray(arr,n,p,k);
    printarray(arr,n+1);

}
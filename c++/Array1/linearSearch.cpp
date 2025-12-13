#include<iostream>
using namespace std;
void inputarray(int arr[],int n,int x){
    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[],int n,int x){
    //search
    //checkmark
    bool flag = false; //false -> element is not present
    for(int i=1;i<=n-1;i++){
        if (arr[i]==x) flag = true;
    }
    if(flag == true) cout<<"element found";
    else cout<<"element not found";
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    int arr[n];
    inputarray(arr,n,x);
    outputarray(arr,n,x);
}
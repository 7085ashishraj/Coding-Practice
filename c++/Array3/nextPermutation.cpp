#include<iostream>
using namespace std;

void inputarray(int arr[],int n){
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

void outputarray(int arr[],int n){
    cout<<"Print array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done";
}

void findpivot(int arr[],int n){
    int idx = -1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }
}

void partreverse(int arr[],int n,int idx,int j){
    for(int i=idx+1;i<=j;i++){
        swap(arr[i++],arr[j--]);
    }
}

void findGreater(int arr[],int n,int idx){
    int j=-1;
    for(int i=idx+1;i<=n-1;i++){
        if(arr[i]>arr[idx]){
            j = i;
            break;
        }
    }
}

// void swapping(int idx, int j,int arr[]){
//     int temp = arr[idx];
//     idx  = j;
//     j = temp;
// }

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    inputarray(arr,n);
    outputarray(arr,n);
    findpivot(arr,n);
    //findGreater(arr,n,idx);
    partreverse(arr, n, idx, n-1);
}
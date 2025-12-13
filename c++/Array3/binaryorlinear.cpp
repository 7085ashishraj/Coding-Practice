#include<iostream>
using namespace std;

int linear(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binary(int arr[],int n,int element){
    int beg=0,end=n-1;
    while(beg<=end){
        int mid = (beg+end)/2;

        if (arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            beg = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

bool issort(int arr[],int n){
    for(int i=0;i<n;i++){
        if (arr[i]>arr[i+1]){
            return false;
        }
        // else{
        //     return true;
        // }
    }
    return true;
}

int search(int arr[],int n,int element){
    if(issort(arr,n)){
        cout<<" using Binary search";
        return binary(arr,n,element);
    }
    else{
        cout<<"using Linear search";
        return linear(arr,n,element);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
    int result = search(arr,n,element);
    cout<<" "<<element<<" "<<"found at position"<<" "<<result;
}

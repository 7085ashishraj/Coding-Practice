#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1]; // upper bound arr[mid+1]
            break;
        }
        else if(arr[mid]<x) low = mid + 1;
        else high = mid - 1;
    }
    if(flag==false) cout<<arr[high]; // upper bound ke liye just write arr[low]
}
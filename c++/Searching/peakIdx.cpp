#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low = 1; // start from 1 to avoid out-of-bounds at arr[mid-1]
    int high = n-2; // end at n-2 to avoid out-of-bounds at arr[mid+1]

    int ans = -1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            ans = mid;
            break;
        }else if(arr[mid]>arr[mid-1]){
            low = mid + 1;
        }else{
            high = mid-1;
        }
    }
    cout<<ans;
}
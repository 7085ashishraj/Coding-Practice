#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int target;
    cin>>target;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //finding pivot element
    int low = 0;
    int high = n-1;
    int pivot = -1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]){
            pivot = mid; //pivot is smallest
            break;
        }
        else if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            pivot = mid+1;// if pivot found is largest, make the next one as smallest
        }
        else if(arr[mid]>arr[high]) low = mid+1;
        else high = mid - 1;
    }

    //normal binary search to find target:-

    if(target>arr[0] && target<=arr[pivot-1])
    {
        low = 0;
        high = pivot - 1;

        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==target) return mid;
            else if(target<arr[mid]) low = mid + 1;
            else high = mid - 1;
        }
        
    }
    else{
        low = pivot;
        high = n-1;

        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==target) return mid;
            else if(target<arr[mid]) low = mid + 1;
            else high = mid - 1;
        }
    }
    return -1;
}
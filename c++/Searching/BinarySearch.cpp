//Linear search kabhi v laga sakte hai
// jabki binary search tabhi lagega jab array sorted ho!

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int low = 0;
    int high = n-1;

    bool flag = false;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            flag = true;
            cout << "Target found at index " << mid << endl;
            break;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(!flag){
        cout << "Target not found" << endl;
    }
}
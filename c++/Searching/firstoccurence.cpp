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
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid<<endl;
                break;
            }
            else{
                high = mid - 1;
            }
        }
        
        else if(arr[mid]<x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(flag == false){
        cout<<-1;
    }
}
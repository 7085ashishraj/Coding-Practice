#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] + arr[i-1];
    }
    //checking if array can be partitioned into two-equal halves or not
    bool flag = false;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Can be Partitioned";
    else cout<<"Can't be partitioned";

}
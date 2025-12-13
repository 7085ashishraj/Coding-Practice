//Bruteforce:-
#include<iostream>
using namespace std;

void inputarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void outputarray(int arr[],int n){
    bool flag = false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                cout<<arr[i];
                break;
            }
        }
    
    }
    if(!flag) cout<<"No dupliacte element";
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    inputarray(arr,n);
    outputarray(arr,n);
}













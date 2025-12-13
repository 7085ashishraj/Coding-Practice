#include<iostream>
#include <climits>
using namespace std;
void inputarray(int arr[], int n){
    cout<<"Enter elements: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}
void outputarray(int arr[], int n){
    int maxi = INT_MIN;
    int sec_maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            sec_maxi = maxi;
            maxi = arr[i];
        }else if(sec_maxi >arr[i] && sec_maxi!=arr[i]){
            sec_maxi = arr[i];
        }
        
    }
    cout<<"Maximum element is: "<<maxi<<endl;
    cout<<"Second maximum element is: "<<sec_maxi;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    //int max = arr[0];
    inputarray(arr,n);
    outputarray(arr,n);
}
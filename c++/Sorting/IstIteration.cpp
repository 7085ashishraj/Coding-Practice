#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    //2 3 1 6 4
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //selection sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minIdx  = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,3,1,4,2};
    int n = 5;

    //Selection sort: 
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minIdx = -1;
        //minimum element calculation
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}
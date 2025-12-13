// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){ //n-1 passes
//         for(int j=0;j<n-1;j++){ //swapping
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         cout<<"Sorting after "<<i+1<<" iteration: ";
//         for(int k=0;k<n;k++){
//             cout<<arr[k]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Sorted Array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

//check if array is sorted or not

#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,1,2,3,4,7,6};
    int n = 7;

    //Implementing optimized Bubble sort: 
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag = false;
            }   
        }
        if(flag==true){ //swap didn't happen no need to check other iterations coz' array becomes already sorted
            break;

        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
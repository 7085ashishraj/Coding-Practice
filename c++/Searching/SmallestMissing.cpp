// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]!=i){  //from linear time complexity.....
//             cout<<i<<endl;
//             break;
//         }
//     }
// }

//By LOGARITHMIC time complexity

#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low = 0;
    int high = n-1;
    int ans = -1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==mid) low = mid + 1;
        else{
            ans = mid;
            high = mid - 1;
        }
    }
    cout<<ans;
}
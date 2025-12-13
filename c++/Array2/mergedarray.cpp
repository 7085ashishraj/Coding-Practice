#include <iostream>  
using namespace std;  

int main() {  
    int m;
    cout<<"Enter size of array1: ";
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int n;
    cout<<"Enter size of array2: ";
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int mergedArray[m+n];  
    for (int i = 0; i < m; i++) {  
        mergedArray[i] = arr1[i];  
    }  
    for (int i = 0; i < n; i++) {  
        mergedArray[m + i] = arr2[i];  
    }  
    cout << "Merged Array: ";  
    for (int i = 0; i < m+n; i++) {  
        cout << mergedArray[i] << " ";  
    }  
    cout << endl;   
}
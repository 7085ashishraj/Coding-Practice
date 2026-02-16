#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int nge[n];
    // for(int i=0;i<n;i++){
    //     nge[i] = -1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j] > arr[i]){
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     cout<<nge[i]<<" ";
    // }

    //Stack based approach

    stack<int> st;
    for(int i = n-1;i>=0;i--){
        while(st.size()>0 && arr[i]>=st.top()){
            st.pop();
        }
        if(st.size() == 0) nge[i] = -1;
        else{
            nge[i] = st.top();
        }
        st.push(arr[i]);
    }

    // for(int i=0;i<n;i++){
    //     cout<<nge[i]<<" ";
    // }

    cout<<endl;

    // for priniting index 
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && arr[i] >= arr[st.top()]){
            st.pop();
        }
        if(st.size() == 0) nge[i] = -1;
        else nge[i] = st.top();
        st.push(i);
    }
}
#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Next Greater Element Array
    int nge[n];
    //Brute-Force Approach
    // for(int i=0;i<n;i++){
    //     nge[i] = -1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j] > arr[i]){
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    //Using a STACK : pop->ans->push

    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);

    for(int i = n-2;i>=0;i--){
        //pop all the ele smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //mark the answer in nge array
        if(st.size()==0) nge[i] = -1;
        else{
            nge[i] = st.top();
        }
        //push the arr[i]
        st.push(arr[i]);
    }





    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

    //T.C O(n*n)

}


#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    stack<int> st;
    //previous greater index array:-
    int pgi[n];
    pgi[0] = 1;
    st.push(0);

    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }

        if(st.size() == 0) pgi[i] = -1;
        else pgi[i] = st.top();

        pgi[i] = i - pgi[i];


        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
}
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

    int ans[n];
    stack<int> st;
    ans[0] = -1;
    st.push(arr[0]);

    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()>=arr[i]){
            st.pop();
        }
        if(st.size() == 0) ans[i] = -1;
        else ans[i] = st.top();

        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
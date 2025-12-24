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

    //Next Smaller Element Array
    int nse[n];
    
    //Using a STACK : pop->ans->push

    stack<int> st;
    nse[n-1] = -1;
    st.push(arr[n-1]);

    for(int i = n-2;i>=0;i--){
        //pop all the ele greater than arr[i]
        while(st.size()>0 && st.top()>=arr[i]){
            st.pop();
        }
        //mark the answer in nge array
        if(st.size()==0) nse[i] = -1;
        else{
            nse[i] = st.top();
        }
        //push the arr[i]
        st.push(arr[i]);
    }





    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }

    

}


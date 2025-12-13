#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> gt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    
    stack<int> kt;
    while(gt.size()>0){
        kt.push(gt.top());
        gt.pop();
    }

    while(kt.size()>0){
        st.push(kt.top());
        kt.pop();
    }

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
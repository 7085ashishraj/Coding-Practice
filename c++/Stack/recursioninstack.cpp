// #include<iostream>
// #include<stack>
// using namespace std;

// void displayRev(stack<int> &st){
//     if(st.size()==0) return;
//     int x = st.top();
//     cout<<x<<" ";
//     st.pop();
//     displayRev(st);
//     st.push(x);
// }

// void display(stack<int> &st){
//     if(st.size()==0) return;
//     int x = st.top();
//     st.pop();
//     display(st);
//     cout<<x<<" ";
//     st.push(x);
// }

// void pushatbottom(stack<int> &st,int val){
//     if(st.size()==0){
//         st.push(val);
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     pushatbottom(st,-10);
//     st.push(x);
// }

// void reverse(stack<int>& st){
//     if(st.size()==1) return;
//     int x = st.top();
//     st.pop();
//     reverse(st);
//     pushatbottom(st,x);
// }

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     //displayRev(st);
//     display(st);
//     //pushatbottom(st,-10);
//     cout<<endl;
//     reverse(st);
//     display(st);


// }

#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        st.push(q);
    }
    stack<int> temp;
    while(!st.empty()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(st.top());
        st.pop();
    }
    v.erase(remove_if(v.begin(),v.end(),[](int x){return x%2 == 0;}));
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

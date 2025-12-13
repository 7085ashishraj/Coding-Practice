// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     stack<int> st;
//     stack<int> temp;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         st.push(q);
//     }
//     cout<<"Initial Stack: ";
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }
//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
//     cout<<"Final stack: ";
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         v.push_back(st.top());
//         st.pop();
//         //cout<<v[i]<<" ";
//     }
//     int mid = n/2;
//     v.erase(v.begin()+mid);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//         st.push(v[i]);
//     }
//     cout<<endl;
   
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
    stack<int> temp;

    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        st.push(q);
    }

    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    cout<<"Initial Stack: ";

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;

    cout<<"Stack after deletion: ";

    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(st.top());
        st.pop();

    }

    int mid = n/2;
    v.erase(v.begin() + mid);


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        st.push(v[i]);
    }
}






















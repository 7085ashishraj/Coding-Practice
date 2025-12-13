// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     stack<int> gt;
//     while(st.size()>0){
//         gt.push(st.top());
//         st.pop();
//     }
//     gt.push(70);

//     while(gt.size()>0){
//         st.push(gt.top());
//         gt.pop();
//     }
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int> &st,int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtBottom(st,80);
    print(st);
}
#include<iostream>
using namespace std;
#define MAX 10
class stack
{
public:
    int top;
    int arr[MAX];
    stack()
    {
        top=-1;
        cout<<"Initializing top"<<endl;
    }
    void push(int data)
    {
        if(top >= (MAX - 1))
        {
            cout<<"\nStack Overflow";
        }
        else
        {
            arr[++top] = data;
            cout<<data<<" pushed into stack"<<endl;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<arr[top--]<<" popped from stack"<<endl;
        }
    }
    void peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<arr[top]<<" is at the top"<<endl;
        }
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.peek();
    return 0;
}
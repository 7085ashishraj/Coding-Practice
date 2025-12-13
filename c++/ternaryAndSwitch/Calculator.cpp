#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    char op;
    cout<<"Enter operator: ";
    cin>>op;
    switch(op == '+'){
        case 1:
        cout<<"Sum is: "<<x+y;
        break;
    }
    switch(op == '-'){
        case 1:
        cout<<"Difference is: "<<x-y;
        break;
    }
    switch(op == '*'){
        case 1:
        cout<<"Product is: "<<x*y;
        break;
    }
    switch(op == '/'){
        case 1:
        cout<<"Division is: "<<x/y;
        break;
    }
}
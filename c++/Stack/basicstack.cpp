#include <iostream>
using namespace std;

#define MAX 3 

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Overflow" << endl;
        return;
    } else {
        stack[++top] = value;
        cout << "Pushed to stack: " << value << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
    } else {
        int removed = stack[top--];
        cout << "Removed value: " << removed << endl;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element: " << stack[top] << endl;
    }
}

void display(){
    if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        for(int i= top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
    }
}

int main() {
    // push(10);
    // push(20);
    // // peek();  // You can also peek at the top element after pushing values
    // push(30);
    // push(40); // This will cause overflow
    // pop();
    // pop();
    // pop();
    // pop();
    // display();
    // peek();  // See the top after popping

    int choice , value;

    while (true){
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cin>>value;
            push(value);
            break;


            case 2: 
            pop();
            break;


            case 3: 
            display();
            break;


            case 4:
            return 0;
            default:
            cout<<"Invalid choice ";
        }
    }
}
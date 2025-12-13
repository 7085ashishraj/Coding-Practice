#include <iostream>
using namespace std;

struct Node {
int data;
Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void insert(int val) {
Node* temp = new Node();
temp->data = val;
temp->next = nullptr;

if (rear == nullptr) {
front = rear = temp;
} else {
rear->next = temp;
rear = temp;
}
}

void del() {
if (front == nullptr) {
cout << "underflow\n";
return;
}

Node* temp = front;
cout << "Element deleted from queue is: " << front->data << endl;
front = front->next;

if (front == nullptr) {
rear = nullptr;
}

delete temp;
}

void display() {
if (front == nullptr) {
cout << "queue empty\n";
return;
}

Node* temp = front;
while (temp != nullptr) {
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}

int main() {
int ch, val;
do {
cout << "Enter choice (1: insert, 2: delete, 3: display, 4: exit): ";
cin >> ch;
switch (ch) {
case 1:
cout << "Enter value: ";
cin >> val;
insert(val);
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
cout << "Exit\n";
break;
default:
cout << "Incorrect input\n";
}
} while (ch != 4);

return 0;
}
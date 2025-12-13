#include <iostream>
using namespace std;
int q[10];
int front = 0;
int rear = 0;
int n = 5;
void insert(int val) {
  if ((front == 1 && rear == n) || (front == rear + 1)) {
    cout << "overflow";
    return;
  }
  if (front == 0) {
    front = 1;
    rear = 1;
  } else {
    if (rear == n)
      rear = 1;
    else
      rear = rear + 1;
  }
  q[rear] = val;
}
void del() {
  if (front == 0) {
    cout << "underflow";
    return;
  }
  cout << "Element deleted from queue is: " << q[front] << endl;
  if (front == rear) {
    front = 0;
    rear = 0;
  } else {
    if (front == n)
      front = 1;
    else
      front = front + 1;
  }
}
void display() {
  int f = front;
  int r = rear;
  if (front == 0) {
    cout << "queue empty";
    return;
  }
  if (f <= r) {
    while (f <= r) {
      cout << q[f] << " ";
      f++;
    }
  }
  cout << endl;
}
int main() {
  int ch, val;
  do {
    cout << "enter choice: ";
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
      cout << "Exit";
      break;
    default:
      cout << "Incorrect input";
    }
  } while (ch != 4);
  return 0;
}
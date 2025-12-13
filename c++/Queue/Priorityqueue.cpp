#include <iostream>
using namespace std;

#define MAX 100

class Priority_Queue {
private:
  int front;
  int rear;
  int values[MAX];
  int priorities[MAX];

public:
  Priority_Queue() { front = rear = -1; }

  void insert(int i, int p) {
    if (rear == MAX - 1) {
      cout << "Queue Overflow\n";
      return;
    }

    if (front == -1) {
      front = rear = 0;
      values[rear] = i;
      priorities[rear] = p;
    } else {
      int j;

      for (j = rear; j >= front && priorities[j] >= p; j--) {
        values[j + 1] = values[j];
        priorities[j + 1] = priorities[j];
      }
      values[j + 1] = i;
      priorities[j + 1] = p;
      rear++;
    }
  }

  void del() {
    if (front == -1) {
      cout << "Queue Underflow\n";
      return;
    }
    cout << "Deleted item is: " << values[front] << endl;
    if (front == rear) {
      front = rear = -1;
    } else {
      front++;
    }
  }

  void show() {
    if (front == -1) {
      cout << "Queue is empty\n";
      return;
    }
    cout << "Queue is :\n";
    cout << "Priority Item\n";
    for (int i = front; i <= rear; i++) {
      cout << priorities[i] << " " << values[i] << endl;
    }
  }
};

int main() {
  int c, i, p;
  Priority_Queue pq;

  do {
    cout << "1. Insert\n";
    cout << "2. Delete\n";
    cout << "3. Display\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> c;

    switch (c) {
    case 1:
      cout << "Input the item value to be added in the queue: ";
      cin >> i;
      cout << "Enter its priority: ";
      cin >> p;
      pq.insert(i, p);
      break;
    case 2:
      pq.del();
      break;
    case 3:
      pq.show();
      break;
    case 4:
      break;
    default:
      cout << "Wrong choice\n";
    }
  } while (c != 4);

  return 0;
}
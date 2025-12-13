#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at a specific position in the circular linked list
void insertAtPosition(Node** head, int newData, int position) {
    Node* newNode = new Node();  // Create a new node
    newNode->data = newData;

    // If inserting at the first position
    if (position == 1) {
        if (*head == nullptr) {
            // If the list is empty, make the new node point to itself
            newNode->next = newNode;
            *head = newNode;
        } else {
            // Insert before the current head and make it the new head
            Node* temp = *head;
            while (temp->next != *head) {
                temp = temp->next;
            }

            newNode->next = *head;
            temp->next = newNode;
            *head = newNode;
        }
        return;
    }

    // Traverse the list to find the correct position
    Node* temp = *head;
    for (int i = 1; i < position - 1 && temp->next != *head; ++i) {
        temp = temp->next;
    }

    // Insert the new node after the node found
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to print the circular linked list
void printList(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes at specific positions
    insertAtPosition(&head, 10, 1);  // Insert 10 at position 1
    insertAtPosition(&head, 20, 2);  // Insert 20 at position 2
    insertAtPosition(&head, 30, 2);  // Insert 30 at position 2
    insertAtPosition(&head, 40, 1);  // Insert 40 at position 1

    // Print the circular linked list
    cout << "Circular Linked List: ";
    printList(head);

    return 0;
}

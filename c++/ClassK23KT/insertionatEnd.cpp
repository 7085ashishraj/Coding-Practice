#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the circular linked list
void insertAtEnd(Node** head, int newData) {
    Node* newNode = new Node();  // Create a new node
    newNode->data = newData;
    newNode->next = *head;       // New node's next points to the head

    // If the list is empty, make the new node point to itself
    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head;
    } else {
        // Traverse to the last node
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }

        // Adjust the last node's next to point to the new node
        temp->next = newNode;
    }
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

    // Insert nodes at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    // Print the circular linked list
    cout << "Circular Linked List: ";
    printList(head);

    return 0;
}

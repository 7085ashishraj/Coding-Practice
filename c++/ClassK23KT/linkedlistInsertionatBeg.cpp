#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the circular linked list
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node();  // Create a new node
    newNode->data = newData;      // Set the data for the new node
    newNode->next = *head;

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
        // Make the new node the head of the list
        newNode->next = *head;
        *head = newNode;
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

    // Insert nodes at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 40);

    // Print the circular linked list
    cout << "Circular Linked List: ";
    printList(head);

    return 0;
}

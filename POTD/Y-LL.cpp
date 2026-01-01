//JAN1 GFG Finding intersection of linked list

//Intuition:- find length,Adjust both temp,then diff and compare if not found return NULL

#include <bits/stdc++.h>
using namespace std;

// Node definition
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    int findLength(Node* head) {
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
    Node* intersectPoint(Node* head1, Node* head2) {
        int l_head1 = findLength(head1);
        int l_head2 = findLength(head2);
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        // Align both pointers to same distance from end
        if(l_head1 > l_head2) {
            int diff = l_head1 - l_head2;
            while(diff--) temp1 = temp1->next;
        } else {
            int diff = l_head2 - l_head1;
            while(diff--) temp2 = temp2->next;
        }
        
        // Traverse together until intersection or end
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1 == temp2) return temp1;  // intersection found
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return NULL; // no intersection
    }
};

// Helper function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Example input
    // First linked list: 1 -> 2 -> 3 -> 4 -> 5
    // Second linked list: 9 -> 10 -> (joins at 3 -> 4 -> 5)

    Node* common = new Node(3);
    common->next = new Node(4);
    common->next->next = new Node(5);

    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = common;

    Node* head2 = new Node(9);
    head2->next = new Node(10);
    head2->next->next = common;

    Solution obj;
    Node* intersection = obj.intersectPoint(head1, head2);

    if(intersection != NULL)
        cout << "Intersection at node with value: " << intersection->data << endl;
    else
        cout << "No intersection found" << endl;

    return 0;
}
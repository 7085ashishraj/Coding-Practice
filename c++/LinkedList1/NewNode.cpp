#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

void displayrec(Node* head){ //displaying thru recursion
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

void insertAtTail(Node*& head, int val){
    Node* t = new Node(val);
    if(head == NULL){
        head = t;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = t; //O(n)
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    //display(a);
    //size(a);
    //displayrec(a);
    display(a);
    insertAtTail(a,80);

    display(a);
}
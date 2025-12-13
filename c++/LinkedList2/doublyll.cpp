#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;  //extra for DLL
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL; //extra for DLL
    }
};

class DLL{ //User-defined data Structure
    public:
    Node* head ;
    Node* tail ;
    int size;

    DLL(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; //extra for DLL
            tail = temp;  
        }
        size++;  //Time Comp:- O(1) if we do from while loop it will take O(n);
    }

    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; //Extra for DLL
            head = temp;
        }
        size++;
    }

    //ye badhiya chij hai....
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size)cout<<"Invalid Index"<<endl;
        else if(idx == 0)insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val); // ye naya node bnaya insert karne ke liye...
            Node* temp = head; //ye traversing ke liye hai...

            for(int i=1;i<=idx-1;i++){
                temp = temp->next; //Iska mtlb hai temp ko idx-1 tak le aao....
            }
            t->next = temp->next;
            temp->next = t; 
            //extra for DLL
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx < 0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx == 0) return head -> val;
        else if(idx == size-1) return tail -> val;

        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0) {
            cout<<"List is Empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size == 0){
            cout<<"List is Empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--; 
    }

    void deleteAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) deleteAtHead();
        else if(idx == size - 1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.display();
    list.insertAtTail(40);
    list.display();

}
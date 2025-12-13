#include<iostream>
using namespace std;

class Node{ //User-defined class
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL; //NUll ka koi val nahi hota aur na ho koi address hota hai
    }
};

class LinkedList{ //User-defined data Structure
    public:
    Node* head ;
    Node* tail ;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;  
        }
        size++;  //Time Comp:- O(1) if we do from while loop it will take O(n);
    }

    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size)cout<<"Invalid Index"<<endl;
        else if(idx == 0)insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;

            for(int i=1;i<=idx-1;i++){
                temp = temp->next; //Iska mtlb hai temp ko idx-1 tak le aao....
            }
            t->next = temp->next;
            temp->next = t;
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
    LinkedList ll; //{ }
    ll.insertAtTail(10);//{10 ->NULL}
    ll.insertAtTail(20); //{10->20->NULL}
    ll.insertAtTail(30); //{10->20->30->NULL}
    ll.insertAtTail(40);//{10->20->30->40->NULL}

    ll.display();

    ll.insertAtHead(50);
    ll.display();

    ll.insertAtIdx(4,80);
    ll.display();
    
    cout<<ll.getAtIdx(3);

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtIdx(4);
    ll.display();
}
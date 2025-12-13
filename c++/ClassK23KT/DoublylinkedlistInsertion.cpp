#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
class linkedlist {
    private:
    Node* head;
    public:
    linkedlist(){
        head=nullptr;
    }
    void insertathead(int data){
        Node* newnode=new Node(data);
        if(head==nullptr)
        {
            head=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void insertattail(int data){ //inserting at last
        Node* newnode=new Node(data);
        if(head==nullptr){
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
    void insertafter(Node* prevNode,int data){
        if(prevNode==nullptr){
            cout << "The previous node cannot be null" << endl;
            return;
        }
        Node* newnode=new Node(data);
        newnode->next=prevNode->next;
        //prevNode->next=newnode;
        newnode->prev=prevNode;
        if(prevNode->next!=nullptr){
            prevNode->next->prev=newnode;
            //newnode->next->prev=newnode;
        }
        prevNode->next=newnode;
    }
    void displayforward(){
        if(head==nullptr){
            cout<<"The list is empty"<<endl;
            return;
        }
        Node* temp=head;
        cout<<"Forward list: ";
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void displaybackward(){
        if(head==nullptr){
            cout<<"The list is empty"<<endl;
            return;
        }
        Node* temp=head;
        //cout<<"Bacward list: ";
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        cout<<"Backward list: ";
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    Node* gethead(){
        return head;
    }
};
int main(){
    linkedlist l;
    l.insertathead(10);
    l.insertathead(5);
    l.insertattail(20);
    l.insertattail(80);
    l.insertafter(l.gethead()->next,85);
    l.displayforward();
    l.displaybackward(); 
}
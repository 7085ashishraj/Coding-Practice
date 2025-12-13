#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* tree(int data){
  Node* newnode = new Node();
  newnode->data = data;
  newnode->left = nullptr;
  newnode->right = nullptr;
  return newnode;
}

void preorder(Node* root){
  if(root == nullptr){
    cout<<"..........";
  }
  Node* stack[10];
  int top = -1;
  Node* ptr = root;
  while(ptr != nullptr || top != -1){
    if(ptr != nullptr){
      cout<<ptr->data<<" ";
      stack[++top] = ptr;
      ptr = ptr->left;
    }
    else{
      ptr = stack[top--];
      ptr = ptr->right;
    }
  }
}

int main(){
  Node* root = tree(1);
  root->left = tree(2);
  root->right = tree(3);
  root->left->left = tree(4);
  root->left->right = tree(5);
  root->right->left = tree(6);
  root->right->right = tree(7);
  preorder(root);
  cout << endl;
  return 0;
}
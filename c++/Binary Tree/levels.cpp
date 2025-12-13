#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

//createing a Node

class Node{ //This is a tree node
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(Node* root){
    if(root==NULL) return 0;
    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    int ans = root->val + leftSum + rightSum;
    return ans;
}

int size(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + size(root->left) + size(root->right);
}

int maxINtree(Node* root){
    if(root==NULL) return INT16_MIN;
    int lMax = maxINtree(root->left);
    int rMax = maxINtree(root->right);
    return max(root->val,max(lMax,rMax));
}

int minINtree(Node* root){
    if(root==NULL) return INT16_MAX;
    int lMin = minINtree(root->left);
    int rMin = minINtree(root->right);
    return min(root->val,max(lMin,rMin));
}

int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

int main(){
    Node* a = new Node(1); //root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<maxINtree(a);
    cout<<endl;
    cout<<minINtree(a);
    cout<<endl;
    cout<<levels(a);
    

}
//Construct binary tree from given inorder and preorder traversals
#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(int ps, int pe, vector<int> &preorder, int is, int ie, vector<int> &inorder){
    if(ps>pe || is>ie) return NULL;
    Node* root = new Node(preorder[ps]);
    int inIndex = -1;
    for(int i=is;i<=ie;i++){
        if(inorder[i] == root->data){
            inIndex = i;
            break;
        }
    }
    int count = inIndex - is;
    root->left = buildTree(ps+1, ps+count, preorder, is, inIndex-1, inorder);
    root->right = buildTree(ps+count+1, pe, preorder, inIndex+1, ie, inorder);
    
    return root;
}

void printInorder(Node* root){
    if(root==NULL) return;
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    int n;
    cin>>n;
    vector<int> preorder(n), inorder(n);
    for(int i=0;i<n;i++) cin>>preorder[i];
    for(int i=0;i<n;i++) cin>>inorder[i];
    Node* root = buildTree(0,n-1,preorder,0,n-1,inorder);
    printInorder(root);
    cout<<endl;
}
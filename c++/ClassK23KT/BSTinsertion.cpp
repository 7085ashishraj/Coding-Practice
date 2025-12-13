#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;


    Node(int val) {
    data = val;
    left = right = nullptr;
    }
};


Node* insert(Node* root, int val) {

if (root == nullptr) {
return new Node(val);
}

if (val < root->data) {
root->left = insert(root->left, val);
} else {
root->right = insert(root->right, val);
}
return root;
}

void inorder(Node* root) {
if (root == nullptr) return;

inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}

// void preorder(Node* root){
    
// }

int main() {
Node* root = nullptr;


int elements[] = {50, 70, 60, 20, 90, 10, 40, 100};
int n = sizeof(elements) / sizeof(elements[0]);


for (int i = 0; i < n; ++i) {
root = insert(root, elements[i]);
}

cout << "Inorder Traversal of BST: ";
inorder(root);
cout << endl;

return 0;
}
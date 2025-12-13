// #include<iostream>
// using namespace std;

// struct Node
// {
// int data;
// Node* left;
// Node* right;
// };


// Node* tree(int data)
// {
// Node* newnode = new Node;
// newnode->data = data;
// newnode->left = nullptr;
// newnode->right = nullptr;
// return newnode;
// }

// void postorder(Node* root)
// {
// if (root == nullptr)
// {
// return;
// }

// postorder(root->left);
// //cout << root->data << " ";
// postorder(root->right);
// cout<< root -> data <<" ";
// }


// Node* Tree()
// {
// int data;
// cout << "Enter data for node: ";
// cin >> data;

// if (data == -1)
// {
// return nullptr;
// }

// Node* root = tree(data);


// cout << "Enter left child: " << data <<endl;
// root->left = Tree();

// cout << "Enter right child : " << data <<endl;
// root->right = Tree();

// return root;
// }

// int main()
// {
// Node* root = Tree();

// postorder(root);

// return 0;
// }



#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* createTree() {
    int data;
    cout << "Enter data for node (-1 for no node): ";
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);

    cout << "Enter left child of " << data << ": ";
    root->left = createTree();

    cout << "Enter right child of " << data << ": ";
    root->right = createTree();

    return root;
}

void postorder(Node* root) {
    if (!root) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = createTree();
    cout << "Postorder Traversal: ";
    postorder(root);
    return 0;
}

#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int item) {
        data = item;
        left = right = nullptr;
    }
};

bool search(Node* root, int key) {
 
    
    if (root == nullptr) return false;

    
    if (root->data == key) return true;

    if (key > root->data) 
        return search(root->right, key);
        
    else
        return search(root->left, key);
}

int main() {
  
    Node* root = new Node(6);
    root->left = new Node(2);
    root->right = new Node(8);
    root->right->left = new Node(7);
    root->right->right = new Node(9);

    int key = 7;
    
    // Searching for key in BST
    cout << search(root, key) << endl;
}

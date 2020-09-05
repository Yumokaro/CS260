// Prime numbers: 3,5,7,11,13,17,19

#include <array>
#include <iostream>

using std::cout;
using std::endl;
using namespace std;

// Node structure
struct Node {
    int value;
    Node *left;
    Node *right;
};

Node *newNode(int value) {
    Node *node = new Node;
    node->value = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

Node *insertNode(Node *root, int value) {

    if(value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value > root->value) {
        root->right = insertNode(root->right, value);
    }

    return root;
}




int main() {

    cout << "hello" << endl;

    Node *root = NULL;
    root = newNode(13);

    insertNode(root, 19);
    insertNode(root, 11);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 17);
    insertNode(root, 5);


    return 0;
}
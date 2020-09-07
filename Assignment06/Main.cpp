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
    if (root == NULL) {
        return newNode(value);
    }

    if (value < root->value) {
        root->left = insertNode(root->left, value);
    } else if (value >= root->value) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Start with the root, then go left>right
void preOrderTrav (Node *root) {
    // Go until leaf, then go back
    if (root == NULL)
        return;

    cout << root->value << ", ";
    preOrderTrav(root->left);
    preOrderTrav(root->right);
}


int main() {

    cout << "hello" << endl;

    // root starts at null, then becomes the first(new) node @ 13
    Node *root = NULL;
    root = insertNode(root, 13);

    // add additional nodes to the tree
    insertNode(root, 19);
    insertNode(root, 11);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 17);
    insertNode(root, 5);

    preOrderTrav(root);

    return 0;
}
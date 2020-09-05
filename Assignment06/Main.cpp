// Prime numbers: 3,5,7,11,13,17,19,23,29,31,37,39,41,43,47

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

Node *insert(Node *root, int value) {

    if(value < root->value) {
        root->left = insert(root->left, value);
    } else if (value > root->value) {
        root->right = insert(root->right, value);
    }

    return root;
}




int main() {

    cout << "hello" << endl;

    return 0;
}
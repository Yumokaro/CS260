#ifndef CS260_LINKED_LIST_H
#define CS260_LINKED_LIST_H

#include <array>
#include <iostream>

using std::cout;
using std::endl;
using namespace std;

class Node {
    public:
        int value;
        Node *next;

        Node(int value) {
            this->value = value;
            next = NULL;
        };
};

// Print each node
void print(Node *head) {
    Node *temp = head;

    while(temp != NULL) {
        cout << temp->value << ", ";
        temp = temp->next;
    }
    cout << "END" << endl;
};

// Insert a node
Node* insert_node() {
    int value;

    return 0;
};



#endif //CS260_LINKED_LIST_H

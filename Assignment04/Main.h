#ifndef CS260_MAIN_H
#define CS260_MAIN_H

#include <array>
#include <iostream>

using std::cout;
using std::endl;
using namespace std;

// What node structure is
struct Node {
    int value;
    Node *next;
    //Node *previous;
};

// Global
Node *head = NULL;

// How to make a node
Node* newNode(int value) {
    Node *node = new Node;
    node->value = value;
    node->next = NULL;

    return node;
}

// Make a new node
Node* create_node(int value) {
    if (head == NULL) {
        return newNode(value);
    } else {
        Node *current = head;

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = newNode(value);

        return current->next;
    }
}

void print_nodes () {
    Node *current = head;

    cout << "{ ";
    while (current != NULL) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << "}";
}



int main() {
    cout << "hello" << endl;

    head = create_node(5);
    create_node(10);
    create_node(20);
    create_node(30);

    print_nodes();


    return 0;
};

#endif //CS260_MAIN_H

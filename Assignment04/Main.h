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

int count = 0;
void inquire_node(int pos) {
    Node *current = head;

    while (current != NULL) {
        // position - 1, starts at 0
        if ((pos - 1) == count) {
            cout << current->value;
        }
        else {
            current = current->next;
        }
        count++;
    }
}

void insert_node(Node** current, int pos, int value) {

    // Take pos parameter and count down to zero / cycle through this many nodes
    while (pos--) {
        // And then make a new node
        if (pos == 0) {
            Node* temp = newNode(value);
            temp->next = *current;
            *current = temp;
        }
        else {
            current = &(*current)->next;
        }
    }
}

void remove_node(int pos) {
    Node *current = head;
    // Check if first node
    if (pos == 1) {
        head = current->next;
        free(current);
    }
    else {
        // must have three nodes to work with; abc >> ac
        for (int i = 0; i < (pos-2); i++) {
            current = current->next;
        }

        Node *temp = current->next;

        current->next = temp->next;
        free(temp);
    }
    // Could make statement to check if out of bounds
}

void print_nodes() {
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

    cout << "\nInserting a node at position 3, value is 22" << endl;
    insert_node(&head, 3, 22);

    print_nodes();

    cout << "\nWhat value is at position three?" << endl;
    inquire_node(3);

    cout << "\nI don't like that number, remove it" << endl;
    remove_node(3);
    print_nodes();

    return 0;
};

#endif //CS260_MAIN_H

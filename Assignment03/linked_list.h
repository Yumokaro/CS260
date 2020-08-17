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

void print(Node *&head) {
    if(head != NULL) {
        cout << head->value << ", ";
    }
    cout << "NULL" << endl;
};


#endif //CS260_LINKED_LIST_H

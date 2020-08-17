#ifndef CS260_LINKED_LIST_H
#define CS260_LINKED_LIST_H


class Node {

public:
    int value;
    Node *next;

    Node(int value) {
        this->value = value;
        next = NULL;
    };
};


#endif //CS260_LINKED_LIST_H

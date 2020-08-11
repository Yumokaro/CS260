// Using variable of int to combine assignment #3 and #4

#include <iostream>
#include "queue_class.h"

using std::cout;
using std::endl;
using namespace std;
/*
class Queue {
    int qArray[6];
    int head;
    int tail;

    Queue() {
        head = -1;
        tail = -1;
    }
    void enqueue(int value) {
        // check if queue is empty
        if (head == -1)
            head++;
        // increment last then assign value
        qArray[++tail] = value;
    }
};
*/

int main() {
    // Object
    Queue q;
    q.enqueue(55);
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(28);
    q.enqueue(7);
    q.enqueue(14);

    q.printValues();

    return 0;
}
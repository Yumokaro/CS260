#ifndef CS260_QUEUE_CLASS_H
#define CS260_QUEUE_CLASS_H

#include <array>

using std::cout;
using std::endl;
using namespace std;

class Queue {
    int qArray[6];
    int head;
    int tail;

// make all functions public (down)
public:
    Queue() {
        head = -1;
        tail = -1;
    }

    void enqueue(int value) {
        // check if queue is empty
        if(head == -1)
            head++;
        // increment last then assign value
        qArray[++tail] = value;

    }

    void dequeue() {
        // check if list is empty
        if(head == -1){
            cout << "Queue is empty, cannot dequeue" << endl;
            return;
        }
        // reset
            // reset queue when only one value is left
        else if(head == tail) {
            cout << "The queue has been reset to default [0]" << endl;
            head = -1;
            tail = -1;
        }


    }

    void printValues() {
        cout << "The size of the array is: " << sizeof(qArray)/sizeof(qArray[0]) << endl;
        // check if queue has values
        if(head != -1) {
            for(int i = head; i <= tail; i++) {
                cout << qArray[i] << endl;
            }
        }

    }
};


#endif //CS260_QUEUE_CLASS_H

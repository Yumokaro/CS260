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

        if(head == -1){
            // check if list is empty
            cout << "Queue is empty, cannot dequeue" << endl;
            return;
        }
        else if(head == tail) {
            // reset queue when only one value is left
            cout << "The queue has been reset to default [0]" << endl;
            head = -1;
            tail = -1;
            return;
        }
        else {
            // Bump head up by one position
            head++;
        }
    }

    void printValues() {
        if(head == -1) {
            cout << "The queue is empty" << endl;
        }

        // check if queue has values
        else {
            cout << "The size of the array is: " << sizeof(qArray)/sizeof(qArray[0]) << endl;
            cout << "And the Queue is now: {";
            for(int i = head; i <= tail; i++) {
                if (i == head) {
                    cout << qArray[i];
                }
                else {
                    cout << ", " << qArray[i];
                }
            }
            cout << "}" << endl;
        }

    }
};


#endif //CS260_QUEUE_CLASS_H

// Using variable of int to combine assignment #3 and #4

//#include <array>
#include <iostream>
#include "queue_class.cpp"

using std::cout;
using std::endl;
using namespace std;

int main() {
    // Object
    Queue q;
    q.printValues();
    cout << endl;

    q.enqueue(55);
    q.enqueue(1);
    q.enqueue(3);
    q.enqueue(28);
    q.enqueue(7);
    q.enqueue(14);
    q.printValues();
    cout << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.printValues();
    cout << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.printValues();

    return 0;
}
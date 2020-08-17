// Using variable of int to combine assignment #3 and #4

//#include <array>
#include <iostream>
#include "queue_class.cpp"
#include "linked_list.cpp"

using std::cout;
using std::endl;
using namespace std;





int main() {
    Node n1(2);
    Node n2(5);

    n1.next = &n2;
    cout << n2.value << endl;


    // Object
    Queue q;
    q.printValues();
    cout << endl;

    q.enqueue(3);
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
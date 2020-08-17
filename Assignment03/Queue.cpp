// Using variable of int to combine assignment #3 and #4

//#include <array>
#include <iostream>
#include "queue_class.cpp"
#include "linked_list.cpp"

using std::cout;
using std::endl;
using namespace std;

int main() {
    // Manual assign of LL
    Node n1(2);
    Node n2(5);
    Node n3(17);
    Node n4(1);
    Node n5(22);
    Node n6(18);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = NULL;

    Node *head = &n1;


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
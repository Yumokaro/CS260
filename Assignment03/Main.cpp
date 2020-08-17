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
    Node *head = &n1;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;
    n6.next = NULL;

    print(head);


/*
    // Queue Object
    Queue q;
    q.printValues();
    cout << endl;

    q.enqueue(n1.value);
    q.enqueue(n2.value);
    q.enqueue(n3.value);
    q.enqueue(n4.value);
    q.enqueue(n5.value);
    q.enqueue(n6.value);
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
*/
    return 0;
}
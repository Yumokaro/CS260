// Employees and ID numbers

#include <iostream>
#include "hash_table.h"

using namespace std;


int main() {
    cout << "hello" << endl;

    hash_table T;
    /*
    if (T.isEmpty()) {
        cout << "Table is empty" << endl;
    }
     */

    T.insert(0, "Carl0");
    T.insert(1, "Carl1");
    T.insert(2, "Carl2");
    T.insert(3, "Carl3");
    T.insert(4, "Carl4");

    T.print_hash_table();
    return 0;
}
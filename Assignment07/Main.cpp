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

    T.insert(0, "Carl");
    //T.insert(1, "Shake");

    T.print_hash_table();
    return 0;
}
// Employees and ID numbers
// Hashing is done by a unique key {element 1} of each list item of the array

#include <iostream>
#include "hash_table.h"

using namespace std;

int remove_key;

int main() {
    cout << "hello" << endl;

    hash_table T;

    T.insert(0, "Carl0");
    T.insert(1, "Carl1");
    T.insert(2, "Carl2");
    T.insert(3, "Carl3");

    // change key 2
    T.insert(2, "Shake");
    T.insert(4, "Carl4");

    T.isEmpty();
    T.print_hash_table();

    cout << "\n::Remove a value ::" << endl;
    cout << "Enter a value to remove:";

    cin >> remove_key;
    T.remove(remove_key);
    T.remove(2);
    T.print_hash_table();


    return 0;
}
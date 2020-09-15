// Reuse me
#ifndef CS260_HASH_TABLE_H
#define CS260_HASH_TABLE_H

#include <iostream>
// STLs
#include <list>
// begin(),end() - string or cstring?
#include <cstring>

using namespace std;

class hash_table {
    private:
        static const int tables = 5;
        //https://stackoverflow.com/questions/24811418/c-list-of-pairs
        // hash table array size of ^^^ tables using lists
        list<pair<int, string>> hash_table[tables];

    public:
        // check is DS is empty
        bool isEmpty();
        int hash_function(int key);
        void insert(int key, string name);
        // remove unique key
        void remove(int key);
        void print_hash_table();
};

bool hash_table::isEmpty() {
    int x = 0;
    for (int i = 0; i < tables; i++) {
        x += hash_table[i].size();
    }

    if (x > 0) {
        // table is NOT empty
        return false;
    } else {
        // table is empty ;)
        return true;
    }
}

// needed? or complicates
int hash_table::hash_function(int key) {
    key = (key - 1);
    return key;
}

// iterate through list to check if key exists
// https://www.geeksforgeeks.org/mapbegin-end-c-stl/
void hash_table::insert(int key, string name) {
    int t1 = key;
    auto temp = hash_table[t1];
    auto iterate = begin(temp);

    // don't use a comma >_>
    // and ide auto &: temp; adjust above if needed
    for (; iterate != end(temp); iterate++) {
        // first = int ; second = basic_string
        if (iterate->first = key) {
            // replace with new name
            iterate->second = name;
            // break from loop
            break;
        }

    }

}


#endif //CS260_HASH_TABLE_H

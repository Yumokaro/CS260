

// Reuse me
#ifndef CS260_HASH_TABLE_H
#define CS260_HASH_TABLE_H

#include <iostream>
// STLs
#include <list>
    // begin(),end() - string or cstring?
#include <cstring>

#include "hash_table.h"

//using std::cout;
//using std::endl;
using namespace std;

class hash_table {
    private:
        static const int tables = 5;
        //https://stackoverflow.com/questions/24811418/c-list-of-pairs
        // hash table array size of ^^^ tables using lists
        list<pair<int, string>> hash_table[tables];

    public:
        bool isEmpty();
        void hash_function(int key);
        void insert(int key, string name);
        void remove(int key);
        void print_hash_table();

};




#endif //CS260_HASH_TABLE_H



// Reuse me
#ifndef CS260_HASH_TABLE_H
#define CS260_HASH_TABLE_H

#include <iostream>
// STLs
#include <list>
    // begin(),end()
#include <cstring>

#include "hash_table.h"

//using std::cout;
//using std::endl;
using namespace std;

class hash_table {
    private:

        //https://stackoverflow.com/questions/24811418/c-list-of-pairs
        list<pair<int, string>> table

    public:
        bool isEmpty();
        void hash_function(int key);
        void insert(int key, string name);
        void remove(int key);
        void print_hash_table();

};




#endif //CS260_HASH_TABLE_H

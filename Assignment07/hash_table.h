// Reuse me
#ifndef CS260_HASH_TABLE_H
#define CS260_HASH_TABLE_H

#include <iostream>
// STLs
#include <list>
#include <string>   // begin(),end() - string or cstring?  -- both work

using namespace std;

class hash_table {
    private:
        static const int tables = 5;
            // https://stackoverflow.com/questions/24811418/c-list-of-pairs
            // hash table array size of ^^^ tables using lists
        list<pair<int, string>> hash_table[tables];

    public:
        bool isEmpty(); // check is DS is empty
        void hash();
        void insert(int key, const string& name);
        void remove(int remove_key);   // remove by unique key
        void print_hash_table();

};

    // Could use list::empty()
bool hash_table::isEmpty() {
    int x = 0;
    for (int i = 0; i < tables; i++) {
        x += hash_table[i].size();
    }

    if (x > 0) {
        // table is NOT empty
        cout << "Table is not empty, here it is:" << endl;
        return false;
    } else {
        // table is empty ;)
        cout << "Table is empty, try again." << endl;
        return true;
    }
}

void hash_table::hash(int tables) {


    // result %= capacity ((tables))
    // result %= tables;
    // return result;
}



    // iterate through list to check if key exists
    // https://www.geeksforgeeks.org/mapbegin-end-c-stl/
void hash_table::insert(int key, const string& name) {
    int u_key = key;
        // must use & to iterate through to print
    auto& temp = hash_table[u_key];
    auto iterate = begin(temp);

    int x = 0;
        // don't use a comma >_>
        // and ide auto &: temp; adjust above if needed -- DOES NOT USE AUTOMATICALLY
        // for-loop beginning is set already ^^^
    for (; iterate != end(temp); iterate++) {
            // first = int ; second = basic_string
        if (iterate->first == key) {
                // replace with new name
            iterate->second = name;

            x = 1;
                // break from loop
            break;
        }
    }
        // use bool??  -- works fine
    if (x != 1) {
            // must use front or back to emplace
            // -- does not add to back of array, each array element is a list...
        temp.emplace_back(key, name);
    }
}


    // use erase for list container...
    // https://www.geeksforgeeks.org/list-erase-function-in-c-stl/?ref=lbp
void hash_table::remove(int remove_key) {
    int u_key = remove_key;
    auto& temp = hash_table[u_key];
    auto iterate = begin(temp);

    //int x = 0;
    for (; iterate != end(temp); iterate++) {
        if (iterate->first == remove_key) {
            iterate = temp.erase(iterate);
            cout << "Key " << remove_key << " has been erased.\n";
            //x = 1;
            break;
        }
    }
    /*
    if (x != 1) {
        cout << "Key does not exist" << endl;
    }
    */
}

    // clang-tidy modified to this form
void hash_table::print_hash_table() {
    for (auto & i : hash_table) {
        auto it = i.begin();
            // for-loop beginning is set already ^^^
        for (; it != i.end(); it++) {
            cout << it->first << " is " << it->second << endl;
        }
    }
}

#endif //CS260_HASH_TABLE_H

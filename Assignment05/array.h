#ifndef CS260_ARRAY_H
#define CS260_ARRAY_H

#include <iostream>
using namespace std;

class the_array {
    private:
        int the_array[] = { 1, 4, 2, 3, 6, 5 };
        //int array_size = *(&the_array + 1) - the_array;

    public:
        void insert_value(int value);
};

void the_array::insert_value(int value) {
}





#endif //CS260_ARRAY_H

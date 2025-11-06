#include <stddef.h> // For NULL

/**
 * Takes in a pointer to an array, the length of the array, the first number of sequential order, and the last.
 * First tests if it has reached the end of sequential order, otherwise it adds begin value to array and iterates begin.
 * Returns the amount of variables added.
 */
int array_fill(int* array, int array_len, int begin, int end) {
    int i;
    for (i = 0; i < array_len; i++){
        if (begin > end){
            break;
        }

        array[i] = begin;
        begin++;
    }

    return i;
}

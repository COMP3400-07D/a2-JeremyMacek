#include <stddef.h> // For NULL

/**
 * Takes in an array, the number of characters you want to fill the array wit, and the character to fill the array with
 * It iterates i untill it reaches the value of dest_cap. otherwise it adds the character to the array.
 */
void string_fill(char dest[], int dest_cap, char c) {

    for (int i = 0; i < dest_cap; i++){
        if (i == (dest_cap - 1)){
            dest[i] = '\0';
            continue;
        }

        dest[i] = c;
        
    }
}

#include <stddef.h> // For NULL
#include <ctype.h> //For toupper()
#include <string.h> //For strlen()
#include <stdlib.h> //For malloc

/**
 * Takes in a reference to a string. Checks if it is null. It if isn't it creates a new string of the same length.
 * It then goes through the new string and sets all of the elements of the old string as if they were uppercase.
 */
char* capitalize(const char* s) {

    if (s == NULL){
        return NULL;
    }

    int size = strlen(s) + 1;

    char *str = (char *)malloc(size * sizeof(char));

    for (int i = 0; i < size; i++){
        str[i] = toupper(s[i]);
    }

    return str;
}


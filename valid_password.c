#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h> //For isupper()/islower()

/**
 * Takes in a string, iterates through the string keeping track of the amount of lower case and upper case characters in it
 * If any of the characters aren't upper/lowercase letters or a digit it returns false.
 * If it doesn't contain at least two upper or lower case letters it return false.
 */
bool valid_password(const char* s) {

    if (s == NULL){
        return false;
    }

    int lower = 0;
    int upper = 0;
    int i = 0;
    while (s[i] != '\0'){
        
        if (isupper(s[i])){
            upper++;
        }
        else if (islower(s[i])){
            lower++;
        }
        else if (isdigit(s[i])){
            i++;
            continue;
        }
        else{
            return false;
        }
        i++;
    }

    if ((upper >= 2 && lower >= 2) && (i >= 6 && i <= 10)){
        return true;
    }

    return false;
}

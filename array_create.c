#include <stddef.h> // For NULL
#include <stdlib.h> // For Malloc

/**
 * Takes in two integers that are the begining and ending of the array.
 * Creates an array of necessary size and fills it will all of the even values between begin and end
 */
int* array_create_evens(int begin, int end) {

    int len = (end - begin) + 1;

    if (len <= 0){
        return NULL;
    }
    else{

        int* arr = (int *)malloc((len) * sizeof(int));

        for (int i = 0; i < len; i++){

            if (begin > end){
                break;
            }
            else if ((begin % 2) == 0){
                arr[i] = begin;
            }
            else{
                i--;
            }

            begin++;
        }
        return arr;
    }

    return NULL;
}

#include <stddef.h> // For NULL

/**
 * Takes in two strings and the max length of a concatonated string.
 * It goes through the first string to find the end. Then goes through the second string adding the its elements
 * Until it reaches the end of the string or untill the length of the total conactonated string reaches the cap.
 */
void string_concat(char* src1, int src1_cap, const char* src2) {

        int i = 0;
        int j = 0;
        if (src1 != NULL){
            while (src1[i] != '\0'){
                i++;
            }
        }
        

        if (src2 != NULL){
            while (src2[j] != '\0' && i < (src1_cap - 1)){
                src1[i] = src2[j];
                i++;
                j++;
            }
            src1[i] = '\0';
        }
}


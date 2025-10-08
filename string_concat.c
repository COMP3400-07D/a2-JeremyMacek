#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
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


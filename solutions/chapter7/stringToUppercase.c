//Converting a string to uppercase using 
// a non-constant pointer to non-constant data
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *strPtr);

int main (void){
    char string[] = "cHaRACters and $32.98";

    printf("The string before conversion is: %s \n", string);
    convertToUppercase(string);
    printf("The string after conversion is %s", string);
}

void convertToUppercase(char *strPtr){
    while (*strPtr != '\0'){
        *strPtr = toupper(*strPtr);
        ++strPtr;
    }
}
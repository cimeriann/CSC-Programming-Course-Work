// Printing the characters of a string one
// character at a time using a non-constant
// pointer to constant data

#include <stdio.h>
#include <stddef.h>

void printChar(const char *strPtr);

int main (void){
    const char string[] = "Printing Test String5";
    puts("The string is: ");
    printChar(string);
    puts("");
}
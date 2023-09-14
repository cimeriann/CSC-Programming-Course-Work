// Printing the characters of a string one
// character at a time using a non-constant
// pointer to constant data
// note to self: when an array is passed to a function
// this is usually done be reference. When a struct is passed
// to a function, it's passed by value i.e a copy of the struct
// is created and then passed to the function
// when a pointer to a struct is passed to a function, only a copy of 
// the address at which the structure is stored must be made
#include <stdio.h>
#include <stddef.h>

void printChar(const char *strPtr);

int main (void){
    const char string[] = "Printing Test String5";
    puts("The string is: ");
    printChar(string);
    puts("");
}
void printChar(const char *strPtr){
    // while (*strPtr  != '\0')
    // {
    //     /* code */
    //     printf("%c", *strPtr);
    //     strPtr++;
    // }
    /** Alternate version 
    *   does the same thing as the while loop
    *   above except that it uses a for loop 
    *   instead
    **/
   for (; *strPtr != '\0'; strPtr++)
   {
    /* code */
    printf("%c", *strPtr);
   }
   
}
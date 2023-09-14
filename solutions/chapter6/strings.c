#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main (void){
    char string1[SIZE];
    char string2[] = "string literal";

    //read string from user into array string1
    printf("%s", "Enter a string (no longer than 19 characters)");
    scanf("%s", string1);

    //output strings
    printf("string1 is: %s \nstring2 is: %s\n"
     "string1 with spaces between characters is: \n", string1, string2);
    
    //output character until null character is reached
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; i++){
        printf("%c ", string1[i]);
    }
    puts("");
}
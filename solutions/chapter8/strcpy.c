#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main (void){
    //initialize the string
    char x[] = "Happy Birthday to you!";
    char y[SIZE1];
    char z[SIZE2];

    printf("%s%s\n%s%s\n", "The character array in x is: ", x,
    "The character array in y is: ", strcpy(y, x));

    //copy the contents of x into z
    strncpy(z, x, SIZE2 -1);
    z[SIZE2] = '\0';
    printf("The character array in z is: \n%s", z);


}
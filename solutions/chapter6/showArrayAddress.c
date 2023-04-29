#include <stdio.h>
int main (void){
    char array[5];

    printf("    array[0] = %d array = %p\n&array[0] = %p\n &array = %p\n", array[0], array, &array[0], &array);
}
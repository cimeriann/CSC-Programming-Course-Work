// checking the functionality of the sizeof function
#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr);

int main(void){
    //create the array
    float array[SIZE];

    printf("The number of bytes of the array is %u\n"
    "The number of bytes returned by getSize is %u",
    sizeof(array), getSize(array));
}
//return the size of the array
size_t getSize(float *array){
    return sizeof(array);
}
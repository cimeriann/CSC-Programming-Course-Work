#include <stdio.h>
int cubeByReference(int *nPtr);

int main (void){
    int number = 5;
    int *nPtr = &number;

    printf("The old value of number is: %d \n", number);

    cubeByReference(nPtr);

    printf("The new value of number is: %d \n", number);

}
int cubeByReference(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}
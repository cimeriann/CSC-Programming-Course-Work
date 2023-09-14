#include <stdio.h>
#define SIZE 5
int main (void){
    // int n[5] = {1, 2, 5, 6, 7};
    // for (size_t i = 0; i < 5; ++i){
    //     printf("%d \n", n[i]);
    // }
    // write a program that prints the square of the first five numbers greater than one 
//     int square = 0;
//     int numbers[SIZE] = {2, 3, 4, 5, 6};
//     for(size_t i = 0; i < SIZE; ++i){
//         square += (numbers[i] * numbers[i]);
//         printf("The square of %d is %d \n", numbers[i], numbers[i] *  numbers[i]);
//         printf("The sum of the squares is %d", square);
//     }
    // int arr[3][4] = {{1, 4, 2, 3}, {2, 1, 3, 4}, {3, 0, 1, 8}};
    // for (int i = 0; i < 3; ++i){
    //     for (int j = 0; j < 4; j++){
            
    //         if (arr[i][j] == 8){
    //             printf("Target found at arr[%d][%d]", i, j);
    //         }
    //     }
    // }

// POINTERS
    // int *aPtr, a;
    // aPtr = &a;
    // a = 5;
    // printf("The value of a is %d\n", *aPtr);
    // printf("The address of a is %p\n", aPtr);
    // a  = 10; 
    // printf("The address of a is still %p\n", aPtr);
    // printf("The value of a is %d\n", *aPtr);
// write a program that prints the address of the individual elements of the array
int arr[5] =  {1, 4, 3, 7, 5};
for (int i = 0; i < 5; i++){
    printf("The address of arr[%d] is %p \n", i, &arr[i]);
}
}


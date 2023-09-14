 // Fig. 4.5: fig04_05.c 
 // Summation with for.
#include <stdio.h>

int main(void)
{
    unsigned int sum = 0; // initialize sum
    for (unsigned int number = 0; number <= 100; number += 1) {
    sum += number; // add number to sum 
    }
    printf("Sum is %u\n", sum); 
    for (double y = .1; y <= 1.0; y += .1) {
        printf("%f\n", y);
        }
} 
// a) 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (void){
    
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
            int result = (((rand() % 9) + 1) * 3) + 3;
            printf("result: \n");
            printf("%d \n", result);

    
}
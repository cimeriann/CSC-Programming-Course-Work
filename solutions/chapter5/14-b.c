#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (void){
    //;{0, 9}
    // 3, 5, 7, 9, 11, 13, 15, 17, 19
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
            int result = (((rand() % 9) + 2) * 2) - 1;
            printf("result: \n");
            printf("%d \n", result);
    }
    
}
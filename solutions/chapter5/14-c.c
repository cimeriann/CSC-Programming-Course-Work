#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (void){
    //;{0, 9}
    //  3, 8, 13, 18, 23, 28, 33
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
            int result = ((rand() % 7) * 5) + 3;
            printf("result: \n");
            printf("%d \n", result);
    }
    
}
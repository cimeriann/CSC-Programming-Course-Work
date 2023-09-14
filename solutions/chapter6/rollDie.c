// roll a six-sided die sixty million times
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main (void){
    // the frequency array keeps track of the number of times each face has been rolled
    unsigned int frequency[SIZE] = {0}; 

    srand(time(NULL)); //seed random number generator

    // roll die 60,000,000 times
    for (unsigned int roll = 1; roll <= 600000000; roll++){
        size_t face = 1 + rand() % 6;
        ++frequency[face];
    }
    printf("%s%17s\n", "Face", "Frequency");

    // tabulate data
    for (size_t face = 1; face < SIZE; face++){
        printf("%4d%17d\n", face, frequency[face]);
    }

}
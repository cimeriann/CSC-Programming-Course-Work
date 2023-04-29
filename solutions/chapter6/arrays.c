// using arrays to summarize survey results
#include <stdio.h>
#include <stddef.h>
#define FREQUENCY_SIZE 11
#define RESPONSES_SIZE 40
int main (void){
    //define frequency array
    int frequency[FREQUENCY_SIZE] = {0};

    //define array to hold each response
    int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
    5, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
    6, 5, 6, 7, 5, 6, 4, 8, 6};
    //tally the result in the frequency array
    for (size_t i = 0; i < RESPONSES_SIZE; ++i){
        int response = responses[i];

        frequency[response]++;
    };

    //print result for the user
    puts("Response \t Frequency");
    for (int index = 1; index < FREQUENCY_SIZE; index++){
        printf("%d, \t\t %d \n", index, frequency[index]);

    }
}
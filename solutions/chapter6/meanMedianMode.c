//Survey data analysis:
// computing the mean, median and mode of the data.
#include <stdio.h>
#define SIZE 99

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void printArray(unsigned const int a[]);

int main(void){
    unsigned int frequency[10] = {0};

    unsigned int response[SIZE] = 
    {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
4, 5, 6, 1, 6, 5, 7, 8, 7};

mean(response);
median(response);
mode(frequency, response);

}
void mean(const unsigned int answer[]){
    printf("%s\n%s\n%s\n", "********", " Mean", "********");

    unsigned int total = 0;

    // total response values
    for (size_t i = 0; i < SIZE; i++){
        total += answer[i];
    }
    printf("The mean is the average value of the data\n"
"items. The mean is equal to the total of\n"
"all the data items divided by the number\n"
"of data items (%u). The mean value for\n"
"this run is: %u / %u = %.4f\n\n",
SIZE, total, SIZE, (double) total / SIZE);
}

void median(unsigned int answer[]){
    printf("\n%s\n%s\n%s\n%s", 
"********", " Median", "********", 
"The unsorted array of responses is");
}
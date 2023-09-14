// (Rounding Numbers) An application of function ceil is rounding a value to the nearest
// integer. The statement
// y = ceil(x + .5);
// rounds the number x to the nearest integer and assigns the result to y. Write a program that reads
// several numbers and uses the preceding statement to round each of these numbers to the nearest
// integer. For each number processed, print both the original number and the rounded number.

#include <stdio.h>
#include <math.h>
int main (void){
    float inputFromUser;

    while (inputFromUser != EOF || inputFromUser != -1)
    {
        puts("Enter the number you'd like to round: ");
        scanf("%f", &inputFromUser);
        if (inputFromUser == -1){
            break;
        }
        int roundedNum = ceil(inputFromUser + .5);
        printf("%.1f rounded to the nearest integer is %d \n", inputFromUser, roundedNum);
    }
    
}
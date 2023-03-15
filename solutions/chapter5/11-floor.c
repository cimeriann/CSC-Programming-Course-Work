// (Rounding Numbers) Function floor may be used to round a number to a specific decimal
// place. The statement
// y = floor(x * 10 + .5) / 10;
// rounds x to the tenths position (the first position to the right of the decimal point). The statement
// y = floor(x * 100 + .5) / 100;
// rounds x to the hundredths position (the second position to the right of the decimal point). Write
// a program that defines four functions to round a number x in various ways
// a) roundToInteger(number)
// b) roundToTenths(number)
// c) roundToHundreths(number)
// d) roundToThousandths(number)
// For each value read, your program should print the original value, the number rounded to the
// nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth, and the number rounded to the nearest thous
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double roundToInteger(double number){
    double y = floor(number + .5);
    return y;
}
double roundToTenths(double number){
    double y = floor((number)* 10 + .5) / 10;
    return y;
}
double roundToHundreths(double number){
    double y = floor(number * 100 + .5) / 100;
    return y;
}
double roundToThousandths(double number){
    double y = floor(number* 1000 + .5) / 1000;
    return y;
}
int main (void){
    double inputFromUser;

    puts("Enter the number you'd like to round: ");
    scanf("%lf", &inputFromUser);

    int result1 = roundToInteger(inputFromUser);
    
    double result2 = roundToTenths(inputFromUser);

    double result3 = roundToHundreths(inputFromUser);

    double result4 = roundToThousandths(inputFromUser);
    printf("%f to the nearest Integer: %d \t Tenth: %.1lf \t Hundreth: %.2lf \t Thousandth: %.3lf"
    , inputFromUser, result1, result2, result3, result4);
}
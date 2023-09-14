// (Hypotenuse Calculations) Define a function called hypotenuse that calculates the length
// of the hypotenuse of a right triangle when the other two sides are given. The function should take
// two arguments of type double and return the hypotenuse as a double.

#include <math.h>
#include <stdio.h>
double hypotenuse(double side1, double side2){
    double hypSquared = (side1*side1) + (side2*side2);
    double hyp = sqrt(hypSquared);
    return hyp;
}

int main (void){
    double result = hypotenuse(3.0, 4.0);
    double result2 = hypotenuse(5.0, 12.0);
    double result3 = hypotenuse(8.0, 15.0);
    printf("The hypotenuse is: %.1lf \n", result);
    printf("The hypotenuse is: %.1lf \n", result2);
    printf("The hypotenuse is: %.1lf \n", result3);
    
}
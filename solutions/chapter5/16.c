//  (Sides of a Triangle) Write a function that reads three nonzero double values as the sides of a
// triangle, and calculates and returns the area of the triangle as a double variable. It should also check
// whether the numbers represent the sides of a triangle before calculating the area. Use this function in
// a program that inputs a series of sets of numbers.

#include <stdio.h>
#include <math.h>

double triangle_area(double a, double b, double c){
    if(a <= 0 || b <= 0 || c <= 0 ){
        printf("All sides must be nonzero");
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Error: The sides do not form a valid triangle.\n");
        return 0;
    }
    double sum = (a + b + c)/2;
    double area = sqrt(sum * (sum - a) * (sum - b));
    return area;
}

int main (void){
    double a, b, c;
    while (1)
    {
        puts("Enter three numbers, 0 for each to quit");
        scanf("%lf %lf %lf", &a, &b, &c);
        //check if user wants to quit
        if ( a == 0 && b == 0 && c == 0){
            printf("Quitting...");
            break;
        }
        double area = triangle_area(a, b, c);
        if (area > 0){
            printf("The area of the triangle is: %.2lf\n", area);
        }
    }
    
}
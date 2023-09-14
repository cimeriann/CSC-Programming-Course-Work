// Sides of a Right Triangle) Write a function that reads three nonzero integers and 
// determines whether they are the sides of a right-angled triangle. The function should 
// take three integer arguments and return 1 (true) if the arguments comprise a right-angled 
// triangle, and 0 (false) otherwise. Use this function in a program that inputs a series of
// sets of integers.
#include <stdio.h>
#include <math.h>

int checkRightAngled(int a, int b, int c){
    int side1 = a * a;
    int side2 = b * b;
    int side3 = c * c;
    if(a <= 0 || b <= 0 || c <= 0 ){
        printf("All sides must be nonzero\n");
        return 0;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Error: The sides do not form a valid triangle.\n");
        return 0;
    }
    if ((side1 + side2) == side3 || (side1 + side3) == side2 || (side3 + side2) == side1){
        return 1;
    }

    return 0;
}
int main (void){
    int a, b, c;
    while (1)
    {
        puts("Enter three numbers, 0 for each to quit");
        scanf("%d %d %d", &a, &b, &c);
        //check if user wants to quit
        if ( a == 0 && b == 0 && c == 0){
            printf("Quitting...");
            break;
        }
        int check = checkRightAngled(a, b, c);
        if (check){
            printf("The triangle is right angled\n");
        }else{
            puts("The triangle is not right angled");
            break;
        }
    }
    
}

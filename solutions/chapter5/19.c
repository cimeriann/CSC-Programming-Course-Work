// (Rectangle of Asterisks) Write a function that displays a solid rectangle of asterisks whose
// sides are specified in the integer parameters side1 and side2. For example, if the sides are 4 and 5,
// the function displays the following

#include <stdio.h>
#include <stdlib.h>
int displayRectangle(int a, int b){
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            printf("*");
        }
        puts("");
    }
    
}
int main (void){
    int a = 4;
    int b = 5;
    displayRectangle(a,b);
}
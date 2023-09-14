//  (Displaying a Rectangle of Any Character) Modify the function created in Exercise 5.19 to
// form the rectangle out of whatever character is contained in character parameter fillCharacter. Thus
// if the sides are 5 and 4, and fillCharacter is "@", then the function should print the following: 
#include <stdio.h>
#include <stdlib.h>
int fillCharacter(char a){
    return a;
}
int displayRectangle(int a, int b){

    char filler = fillCharacter('@');
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            printf("%c", filler);
        }
        puts("");
    }
    
}

int main (void){
    int a = 4;
    int b = 5;
    displayRectangle(a,b);
}
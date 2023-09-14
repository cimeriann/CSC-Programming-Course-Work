//Bar chart printing program
//  Write a program that reads five numbers (each between 1 and 30). For each number
// read, your program should print a line containing that number of adjacent asterisks. For example,
// if your program reads the number seven, it should print *******

#include <stdio.h>
int main (void){
    unsigned int a, b, c, d, e;
    puts("Enter five integers separated by whitespaces");
    scanf(" %u %u %u %u %u", &a, &b, &c, &d, &e);
    for (unsigned int i = 0; i < a; i++)
    {
        printf("*");
    }
    puts("");
    for (unsigned int i = 0; i < b; i++)
    {
        printf("*");
        
    }
    puts("");

    for (unsigned int i = 0; i < c; i++)
    {
        printf("*");
    }
    puts("");

    for (unsigned int i = 0; i < d; i++)
    {
        printf("*");
    }
    puts("");

    for (unsigned int i = 0; i < e; i++)
    {
        printf("*");
    }
    puts("");
}
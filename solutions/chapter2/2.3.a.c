#include <stdio.h>
int main (void){
    //the statement below results in an error
    //int x = 1, y = 2;
    puts ("x = 1 and y = 2");
    printf( "%s", "Enter first integer: " );
unsigned int x;
scanf( "%u", &x ); // read value for x from user 
printf( "%s", "Enter second integer: " );
 unsigned int y;
 scanf( "%u", &y ); // read value for y from user 

 unsigned int i = 1; 
 unsigned int power = 1; // set power 

 while ( i <= y ) { // loop while i is less than or equal to y 
 power *= x; // multiply power by x 
 ++i; // increment i 
 } // end while 

printf( "%u\n", power ); // display power 
}
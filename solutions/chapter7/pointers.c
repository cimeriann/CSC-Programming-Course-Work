#include <stdio.h>
// include
int main (void){
    int a = 1;
    
    int *aPtr = &a;

    printf("the address of your number %d is %p", a, aPtr);
    puts("");
    printf("the value of aptr is %d", *aPtr);
    puts("");
    printf("weird experiment: \n");
    printf("&*aptr [%d]= *&aPtr [%d]", &*aPtr, *&aPtr);
// note to self: all unary operators execute from right to left
//               + - ++ -- ! * & (type)
//               all assignment operators also execute from right to left
//               = += -= *= /= %=
//               conditional operators (the ternary operator)"?:" execute from right to left
}
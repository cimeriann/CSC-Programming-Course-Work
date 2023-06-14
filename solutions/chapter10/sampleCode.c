#include <stdio.h>
int reverse(int);
int main (){
    // int a = 100, b = 200, c = 300;
    // if (!a >= 500){
    //     b = 300;    
    // }
    // c = 500;
    // printf("%d%d%d", a, b, c);
    // int i = 20;
    // int a;
    // a = i++ / ++i;
    // printf("a = %d _ i = %d", a, i);
    // int i = 7;
    // printf("%d\n", i = ++i == 6);
    // int x = 10;
    // float y = 10.0;
    // if (x == y){
    //     puts("x and y are equal");
    // }
    // else
    // {
    //     puts("x and y are not equal");
    // }
    // printf("%d", x);
    // int x = 0;
    // int z = 20 if x > 0 else -100;
    // printf("%d", z);
    // printf("\n Hellow world!");
    // int a = 0;
    // int b = a++ + a;
    // printf("%d", b);
    // int a = 1, b = 1, c;
    // c = a++ + b;
    // printf("%d %d", a, b);
    // int k;
    // for(k = 0; k < 10;k++);
    // char ch = 'G';
    // int i = ch - 'A';
    // printf("%d", i);
    // given the following piece of code, state the length of the array, the index of its last element and the scope of the arrray: 
    // int main (void){
    //     int a = 4;
    //     int b = 6;
        
    //     int serial[b*b - a*a];
    // }
    int no = 5;
    // reverse(no);
    // return 0;
    int a;
    char b;
    int c;
    scanf("%d%c%d", &a, &b, &c);
    printf("%d, %c, %d", a, b, c);
    int fun();
    int i;
    i = fun();
    printf("%d\n", i);


    }
    int fun(){
        _AX = 1990;
    }
// int reverse(int k){
//     if(k == 0) return 0;
//     else {
//         printf("%d, ", k);
//         reverse(k--);
//         }
// }

int reverse(int k) {
    if (k == 0)
        return 0;
    else {
        printf("%d, ", k);
        reverse(k - 1);
    }
    // main(){
    //     float radius, area;
    //     printf("Radius = ? ");
    //     scanf("%f", &radius);
    //     area = 3.14159 * radius * radius;
    //     printf("Area = %f", area);
    // }
}
// a) to avoid conflicts with environment variables of an operating system
// b) to avoid conflicts since assemblers and loaders use such names
// c) to avoid conflicts since library routines use such names
// d) it is not standardized
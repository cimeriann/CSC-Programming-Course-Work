// (Even or Odd) Write a program that inputs a series of integers and passes them one at a time
// to function isEven, which uses the remainder operator to determine whether an integer is even. The
// function should take an integer argument and return 1 if the integer is even and 0 otherwise.

int checkEven(int num){
    if ((num % 2) == 0){
        return 1;
    }
    return 0;
}
int main (void){
    int num;
    while (1)
    {
        puts("Enter a number, -1 to quit");
        scanf("%d", &num);
        int check = checkEven(num);
        if(check){
            printf("%d is even", num);
        }else{
            printf("%d is odd", num);
        }
    }
    
}

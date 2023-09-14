//Credit Limit Calculator
#include <stdio.h>
int main (void){
    unsigned int accountNumber1, creditLimit1, currentBalance1;
    unsigned int accountNumber2, creditLimit2, currentBalance2;
    unsigned int accountNumber3, creditLimit3, currentBalance3;
    puts("Enter the first customer's account number, credit limit before recession and current balance: ");
    scanf("%u %u %u", &accountNumber1, &creditLimit1, &currentBalance1);

    puts("Enter the second customer's account number, credit limit before recession and current balance: ");
    scanf("%u %u %u", &accountNumber2, &creditLimit2, &currentBalance2);

    puts("Enter the second customer's account number, credit limit before recession and current balance: ");
    scanf("%u %u %u", &accountNumber3, &creditLimit3, &currentBalance3);

    unsigned int newCreditLimit1 = creditLimit1 /2;
    unsigned int newCreditLimit2 = creditLimit2 / 2;
    unsigned int newCreditLimit3 = creditLimit3 / 2;
    
    puts("The new credit limit for the first customer is: ");
    printf("%d \n", newCreditLimit1);
    if (currentBalance1 >= newCreditLimit1)
    {
        puts("The first customer's current balance exceeds their credit limit");
    }
    puts("The new credit limit for the second customer is: ");
    printf("%d \n", newCreditLimit2);
    if (currentBalance2 >= newCreditLimit2)
    {
        puts("The second customer's current balance exceeds their credit limit");
    }
    puts("The new credit limit for the third customer is: ");
    printf("%d \n", newCreditLimit3);
    if (currentBalance3 >= newCreditLimit3)
    {
        puts("The third customer's current balance exceeds their credit limit");
    }

}
//Morgage program
#include <stdio.h>
/**
 * main - Entry point
 * 
 * @return int 
 */

//function main begins program execution
int main( void )
{
    int accountNumber; // variable to hold the of account number
    int mortgageAmount; // variable to hold the value of mortgage amount
    float interestRate; // variable to hold the value of interest rate
    int mortgageTerm; // variable to hold the value of mortgage term
    int totalAmount; // variable to hold the value of total amount
    int monthlyPayable; // variable to hold the value of amount payable per month after interest rate has been calculated

    //prompt user for account number
        printf("Enter account number (-1 to end) : ");
        scanf("%d", &accountNumber);// read value entered and store in variable

    // keeps running until -1 is used to end the loop
    while (accountNumber != -1)
        {
        //prompt the user for the mortgage amount
        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &mortgageAmount);// read value entered and store in variable

        //prompt the user for the mortgage term
        printf("Enter mortgage term (in years): ");
        scanf("%f", &mortgageTerm); // read value entered and store in variable

        //prompt the user for the interest rate
        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &interestRate);// read value entered and store in variable

        totalAmount = mortgageAmount + (mortgageAmount * interestRate * mortgageTerm);
        monthlyPayable = (totalAmount / (12 * mortgageTerm));
        printf("The monthly payable interest $ %d \n", (int)monthlyPayable);

        printf("\n");
    }
    return (0);
}// end function main
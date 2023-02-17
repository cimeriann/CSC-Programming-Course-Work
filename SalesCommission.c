//Sales Commission Program
#include <stdio.h>
/**
 * main - Entry point
 * 
 * @return (0) - Success 
 */
int main( void )
{
    float totalSales; //keep track of total sales made
    float salesCommission; // variable to hold the commission each salesperson gets

    // keeps running until user enters -1
    while (totalSales != -1)
    {
        //prompt the user for input
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &totalSales);// store value entered

        //check if totalSales == -1
        if (totalSales == -1) break;

        //compute the salesCommission from the given values
        salesCommission = 200 + (totalSales * 0.09);

        // print the sales commission after it's been calculated
        printf("Salary is: $ %.2f \n", salesCommission);
        printf("\n");//print new line
    }
    return(0);
}
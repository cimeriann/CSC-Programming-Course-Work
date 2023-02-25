//Interest Calculator Program
#include <stdio.h>
/**
 * main - Entry point
 * 
 * @return (0) - Success 
 */
int main ( void ){
    float interest;//interest accrued on principal
    float principal;// principal amount to be loaned
    float rate; // rate of interest accruement
    int days;// number of days 
    while(principal != -1)
    {

        //prompt user for loan principal
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);//read and store integer into principal variable

        //check if principal entered == -1
        if (principal == -1) {
            break;
        }
        
        //prompt user for interest rate
        printf("Enter interest rate: ");
        scanf("%f", &rate); // read and store integer into the rate variable

        //prompt user for number of loan days
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);//read and store integer into the days variable

        //compute interest
        interest = ( float )(principal * rate * days / 365);

        //print interest charge on loan received
        printf("The interest charge is $%.2f\n", interest);
    }
    return (0);
}// end main function
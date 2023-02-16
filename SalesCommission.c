#include <stdio.h>

int main()
{
    float totalSales, salesCommission;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &totalSales);

    while (totalSales != -1)
    {

        salesCommission = 200 + (totalSales * 0.09);

        printf("Salary is: $ %.2f \n", salesCommission);

        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%f", &totalSales);
    }
}
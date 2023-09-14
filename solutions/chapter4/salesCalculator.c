//Sales Calculator
#include <stdio.h>
int main (void){
    // variable to keep track of product number and amountof each product sold
    unsigned int productNumber, quantitySold;

    float totalWeeklySales;
    float retailPrice;


    //initializition of prices for each product
    float price1 = 2.98;
    float price2 = 4.50;
    float price3 = 9.98;
    float price4 = 4.49;
    float price5 = 6.67;
    int dayCount = 1;

    while (dayCount <= 2)
    {
        float dailySales;//keep track of sales made per day for each product
        float totalDailySales = 0;
        for (unsigned int i = 0; i < 5; i++){
            printf("Please enter the product number and quantitiy sold separated by whitspace for day %d \n", dayCount);

            scanf("%u %u", &productNumber, &quantitySold);

            switch (productNumber)
            {
            case 1:
                retailPrice = price1;
                dailySales = retailPrice * quantitySold;
                totalDailySales += dailySales;
                break;
            case 2:
                retailPrice = price2;
                dailySales = retailPrice * quantitySold;
                totalDailySales += dailySales;
                break;
            case 3:
                retailPrice = price3;
                dailySales = retailPrice * quantitySold;
                totalDailySales += dailySales;
                break;
            case 4:
                retailPrice =  price4;
                dailySales = retailPrice * quantitySold;
                totalDailySales += dailySales;
                break;
            case 5:
                retailPrice = price5;
                dailySales = retailPrice * quantitySold;
                totalDailySales += dailySales;
                break;
            }
        }
    printf("The total sales for day %d was: $%.2f \n", dayCount, totalDailySales);
    totalWeeklySales += totalDailySales;
    dayCount++;
    }
    printf("The total weekly sales was: $%.2f \n", totalWeeklySales);
    
}
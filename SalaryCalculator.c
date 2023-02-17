//Salary Calculator
#include <stdio.h>
/**
 * @main - Entry point
 * 
 * @return (0) - Success 
 */
int main(void) {
    int time = 0;         // Initialize time to 0
    int overTime; 
    float hourlyRate;
    float salary;

    while (time != -1) {  // Loop until the user enters -1 for time
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &time);

        if (time == -1) {  // Check for the value of -1 which terminates the loop
            break;         // Exit the loop
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourlyRate);

        if (time > 40) {   // Calculate overtime pay if time is greater than 40
            overTime = time - 40;
            salary = hourlyRate * 40 + (hourlyRate * 1.5 * overTime);
        } else {           // Calculate regular pay if time is 40 or less
            salary = time * hourlyRate;
        }

        printf("Salary is $%.2f\n", salary);  // Print the salary
    }

    return 0;
}

#include <stdio.h>

int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    int octalNumber = decimalToOctal(decimalNumber);

    printf("Octal equivalent: %d\n", octalNumber);

    return 0;
}

#include <stdio.h>

int main(void)
{
    int number, digit, sumOdd=0, sumEven=0, total, checkDigit;

    printf("Enter the first 12 digits of the EAN: ");
    scanf("%d", &number);

    for(int i = 12; i > 0; i--){
        digit = number % 10;
        number = number / 10;

        (i%2==0) ? (sumEven += digit) : (sumOdd += digit); 
    }

    total = (sumEven * 3) + sumOdd;
    checkDigit = 9 - ((total - 1) % 10);
    printf("%d", total);
    printf("Check digit is %d ", checkDigit);

    return 0;
}
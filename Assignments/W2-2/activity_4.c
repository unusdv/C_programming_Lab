#include <stdio.h>

int main(void)
{
    int a, b, c=0;
    printf("Please enter a four-digit number: ");
    scanf("%d", &a);

    do{
        b = a % 10; //to get last umber
        c = c * 10 + b; //to reverse
        a = a / 10; // remove last digit
    }while (a != 0);
    
    printf("%d \n", c);

    return 0;
}
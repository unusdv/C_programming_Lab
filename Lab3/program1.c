// The Area of square

#include <stdio.h>

int main (void)
{
    int base;
    int height;
    printf("Please enter base: ");
    scanf("%d", &base);
    printf("Please enter height: ");
    scanf("%d", &height);

    printf("The Are of square with base %d and with height %d is %d\n",base, height, base*height);

    return 0;

}
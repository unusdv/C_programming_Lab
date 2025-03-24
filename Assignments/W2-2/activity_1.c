#include <stdio.h>

int main (void)
{
    float fahrenheit, celsius;
    
    printf ("Please enter Celsius temperature:  ");
    scanf("%f", &celsius);

    /*
        (C/5)*9 = (F-32) / 9)*9
        (9*C)/5 = F-32
        (9*C)/5 + 32 = F
    */

    fahrenheit = (((9*celsius)/5) + 32);

    printf("%.f Celsius in fahrenheit is %7.1f", celsius, fahrenheit);

    return 0;

}
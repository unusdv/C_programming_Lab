#include <stdio.h>

#define FREEZING_T 32.0f
#define SCALE_FACTOR 5/9


int main (void)
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_T) * SCALE_FACTOR;

    printf("Celsius equalent is %.1f", celsius);

}
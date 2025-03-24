#include <stdio.h>

int main (void)
{
    int age;
    int day, month, year;
    float height;

    age = 13;
    day = 22,
    month = 3;
    year = 2004;
    height = 1.82f;

    printf ("John was born in %d/%d/%d and he is %d years old his height %.2f cm\n", year, month, day, age, height );
}
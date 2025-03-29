#include <stdio.h>

int main (void) 
{
    printf("Hello World!\n");
    int a = 5, b = 10, c = 15, d = 20;
    int result;

    result = a++*-b+c/d;

    printf("%d", result);
    return 0;
}
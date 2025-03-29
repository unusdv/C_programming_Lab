#include <stdio.h>

int main(void) 
{

    for (int i = 1; i <= 5; i++) {
        if (i <= 3) {
            for (int j = 1; j <= 3 - i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                printf("*");
            }
        }
        else {
            for (int j = 1; j <= i - 3; j++) {
                printf(" ");
            }
            for (int j = 1; j <= (5 - 2 * (i - 3)); j++) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    switch (1)
    {
    case 1:
        printf("  *  \n");
    case 2:
        printf(" *** \n");
    case 3: 
        printf("*****\n");
    case 4:
        printf(" *** \n");
    case 5:
        printf("  *  \n");
        break;
    default:
        break;
    }
    
    return 0;

}
#include <stdio.h>

int main(void)
{
    int a = 0, b, c, d, e, f;
    printf("Please enter numbers for b, c, d, e, f -> \n");
    scanf("%d %d %d %d %d",&b, &c, &d, &e, &f);
    // int a = 0, b = 5, c = 10, d = 3, e = 15, f = 2;

    a = (b += (c++) - d) + ((--e) / (-f));

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);


    return 0;

}
#include <stdio.h>

int main(void)
{

    int a, b, c, d, e, f, g, j, k, l, m, n, o, p, q, r;

    printf("Please enter 16 digits: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &j, &k, &l, &m, &n, &o, &p, &q, &r);

    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", e, f, g, j);
    printf("%d %d %d %d\n", k, l, m, n);
    printf("%d %d %d %d\n", o, p, q, r);
    printf("Row sum:      %d %d %d %d\n", a+b+c+d, e+f+g+j, k+l+m+n, o+p+q+r);
    printf("Column sum:   %d %d %d %d\n", a+e+k+o, b+f+l+p, c+g+m+q, d+j+n+r);
    printf("Diagonal sum: %d %d %d %d\n", a+f+m+r, d+g+l+o);

    return 0;
}
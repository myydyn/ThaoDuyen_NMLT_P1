// Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n, voi x la so thuc va n nguyen duong
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n;
    float x, s;

    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);
    while (i <= n)
    {
        s += pow (x, 2*i);
        i ++;
    }

    printf("S(n) = %.7f\n", s);
    return 0;
}
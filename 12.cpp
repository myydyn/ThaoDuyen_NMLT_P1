// Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n, voi x la so thuc va n nguyen duong
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
        s += pow (x, i);
        i ++;
    }

    printf("S(n) = %.5f\n", s);
    return 0;
}
// Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N), voi x la so thuc, n nguyen duong

#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n;
    float x, m, s;

    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);

    while (i <= n)
    {
        m += i;
        s += ((pow(x, i)) / m);
        i ++;
    }

    printf("S(n) = %.5f\n", s);
    return 0;
}
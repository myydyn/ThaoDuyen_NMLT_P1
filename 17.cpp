// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!  voi x la so thuc, n nguyen duong
// TinhGiaiThua, TinhMu, TinhS17

#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n;
    double x, m = 1, s; // m la mau so

    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%lf", &x);

    while (i <= n)
    {
        m *= i;
        s += ((pow(x, i)) / m);
        i ++;
    }

    printf("S(n) = %.5f\n", s);
    return 0;
}
// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^(2n + 1), voi x la so thuc va n nguyen duong
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, n;
    float x, s;

    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);
    while (i <= n)
    {
        s += pow (x, (2*i + 1));
        i ++;
    }

    printf("S(n) = %.5f\n", s);
    return 0;
}
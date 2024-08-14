// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)! (voi x la so thuc, n nguyen duong)

#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, n;
    float x, s = 1, tuSo;
    long mauSo = 1;

    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);

    while (i <= n)
    {
        tuSo = pow(x, (2*i + 1));
        mauSo = mauSo * (2*i) * (2*i + 1);
        s = s + (tuSo / mauSo);
        i++;
    }
    printf("S(n) = %.5f\n", x + s);
    return 0;
}
// Bài 10: Tính T(x, n) = x^n, voi x va n nhap tu ban phim va x khac 0

#include <stdio.h>
#include <math.h>
int main()
{
    // int x, n;
    float x, n;

    printf("n = ");
    scanf("%f", &n);
    printf("x = ");
    scanf("%f", &x);

    float T = pow(x, n);

    printf("T(x, n) = %.2f\n", T);
    return 0;
}
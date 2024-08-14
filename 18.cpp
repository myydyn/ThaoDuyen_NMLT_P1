// Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + (x^2n)/(2n)! (voi x la so thuc, n nguyen duong)

#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n;
    float x, s = 1, tu_so;
    long bien_tam, mau_so = 1; 

    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%f", &x);

    while(i <= n)
    {
        tu_so = pow(x, (2*i));
        bien_tam = 2*i;
        mau_so = mau_so * bien_tam * (bien_tam - 1);
        s = s + tu_so/mau_so;
        i ++;
    }

    printf("S(n) = %f\n", s);
    return 0;
}
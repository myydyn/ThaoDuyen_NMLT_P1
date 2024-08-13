// Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / (n + 1), n ngyen duong

#include <stdio.h>
int main()
{
    int i = 1,  n;
    float s = 0;
    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += (float)i/(i+1);
        i ++;
    }
    printf("S(n) = %.5f\n", s);
    return 0;
}
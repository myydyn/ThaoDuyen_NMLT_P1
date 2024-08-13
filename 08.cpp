// Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + (2n + 1)/ (2n + 2), n nguyen duong

#include <stdio.h>
int main()
{
    int i = 0,  n;
    float s = 0;
    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += (float)(2*i+1)/(2*i+2);
        i ++;
    }
    printf("S(n) = %.5f\n", s);
    return 0;
}
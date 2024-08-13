// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n, n nguyen duong

#include <stdio.h>
int main()
{
    int i = 1,  n;
    float s = 0;
    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += (float)1/(2*i);
        i ++;
    }
    printf("S(n) = %.5f\n", s);
    return 0;
}
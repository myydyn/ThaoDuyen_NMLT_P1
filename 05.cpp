// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1), n nguyen duong

#include <stdio.h>
int main()
{
    int i = 0,  n;
    float s = 0;
    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += (float)1/(2*i+1);
        i ++;
    }
    printf("S(n) = %.5f\n", s);
    return 0;
}
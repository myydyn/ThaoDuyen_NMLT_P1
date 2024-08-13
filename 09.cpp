// Bài 9: Tính T(n) = 1 x 2 x 3…x N, n nguyen duong

#include <stdio.h>
int main()
{
    int i = 1, s = 1, n;

    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s *= i;
        i ++;
    }
    printf("S(n) = %d\n", s);
    return 0;
}

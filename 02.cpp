// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <stdio.h>
#include <math.h>
int main()
{
    int s = 0, i = 1, n;
    printf("Tinh S(n) = 1^2 + 2^2 + … + n^2, moi nhap n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += i*i;
        i++;
    }
    printf("S(n) = %d\n", s);
    return 0;
}
// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n, n nguyen duong
#include <stdio.h>
int main()
{
    int s =0, i=1, n;
    printf("tinh tong tu 1 den n, moi nhap n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += i;
        i ++;
    }
    printf("S(n) = %d\n", s);

    return 0;
}
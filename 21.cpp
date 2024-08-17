// Bài 21: Tính tổng tất cả các “ước số” của số nguyên dương n
// VD: N = 6, S(n) = 1 + 2 + 3 + 6 = 12

#include <stdio.h>
int main ()
{
    int n, i;
    long s = 0;

    printf("n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {

        if (n % i == 0)
        {
            s += i;
            printf("%d ", i);
        }
    }

    printf("\nS (n) = %ld\n", s);
    
    return 0;
}
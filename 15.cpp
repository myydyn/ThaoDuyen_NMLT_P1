// Bài 15: Tính S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ….. + 1/ (1 + 2 + 3 + …. + N), voi n nguyen duong

#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n;
    float m, s;

    printf("n = ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        m += i;
        s += 1 / m;
        i ++;
    }

    printf("S(n) = %.5f\n", s);
    return 0;
}
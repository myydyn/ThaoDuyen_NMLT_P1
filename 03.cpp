// Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n

#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1,  n;
    float s = 0;
    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += (float)1/i;
        i ++;
    }
    printf("S(n) = %.5f\n", s);

    return 1;
}
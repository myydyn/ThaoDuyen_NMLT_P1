// Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1), n nguyen duong

#include <stdio.h>
int main()
{
    int i = 1,  n;
    float s = 0;
    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += (float)1/(i*(i+1));
        i ++;
    }
    printf("S(n) = %.5f\n", s);
    return 0;
}
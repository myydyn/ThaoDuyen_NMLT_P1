// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….n, n nguyen duong
// Bài toán tính tổng các giai thừa

#include <stdio.h>
int main()
{
    int i = 1, s = 0, f = 1, n;

    printf("n = ");
    scanf("%d", &n);
    while (i <= n)
    {
        f *= i;
        s += f;
        i++;
    }
    
    printf("S(n) = %d\n", s);
    return 0;
}

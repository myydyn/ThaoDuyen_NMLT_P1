// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
# include <stdio.h>
int main()
{
    int i = 1, n;
    printf("n = ");
    scanf("%d", &n);
    printf("Cac uoc cua n la:");
    while (i <= n)
    {
        if  (n % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
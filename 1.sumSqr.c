#include <stdio.h>
int main()
{
    int i, a, b, sum = 0;
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        sum += i * i;
    }
    printf("%d\n", sum);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int max;
    scanf("%d", &max);

    for (int i = 10; i <= max; i++)
    {
        int n=i;
        int sum=0;
        int mult=1;
        while (n > 0)
        {
            int current=n%10;
            sum+=current;
            mult*=current;
            n /= 10;
        }
        if(sum==mult)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
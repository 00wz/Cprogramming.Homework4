#include <stdio.h>

int main(void)
{
    int n,result=0;
    scanf("%d",&n);

    while (n>0)
    {
        result*=10;
        int current =n%10;
        result+=current;
        n/=10;
    }

    printf("%d\n", result);
}
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    while (n>0)
    {
        int current=n%10;
        if(current%2!=0)
        {
           printf("NO\n"); 
           return 0;
        }
        n/=10;
    }
    printf("YES\n");
}
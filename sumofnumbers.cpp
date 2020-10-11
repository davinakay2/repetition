#include <stdio.h>
int main()
{
    int i, n, sum = 0, r;
    scanf("%d", &n);
    i = n;
    
    if (n >= 0 && n <= 2147483647)
    {
        while (i != 0)
        {
        r = i % 10;
        sum = sum + r;
        i = i/10;
        }
    printf("%d\n", sum);
    }
    else
    {
        printf("%s", "error\n");
    }  
    return 0;
}
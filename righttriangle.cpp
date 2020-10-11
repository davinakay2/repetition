#include <stdio.h>
int main()
{
    int i, t, x, y;
    scanf("%d",&t);
    int array[t];

    for (i = 0; i < t; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (int n = 0; n < (t); n++)
    {
        for (x = 0; x <= array[n]; x++)
        {
            for (y = x; y <= array[n]; y++)
            {
                printf("%c", ' ');
            }
            for (y = 1; y <= x; y++)
            {
                printf("%c", '#');
            }
        printf("\n");
        }
    }
    return 0;   
}
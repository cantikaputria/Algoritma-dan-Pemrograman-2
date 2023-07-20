#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int i;
    int tabInt[n];

    for (i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    
    int maksimal = 0;
    for (i=0; i < n; i++)
    { 
        if (tabInt[1] % 2 == 1)
        {
            if (maksimal < tabInt[i])
            {
                maksimal = tabInt[i];
            }
            printf("nilai maksimal: %d\n", maksimal);
        } 
    }

    return 0;
}